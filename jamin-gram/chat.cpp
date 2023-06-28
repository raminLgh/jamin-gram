#include "chat.h"
#include "ui_chat.h"
#include "channel.h"
#include "groups.h"
#include "concatenate_string.h"

#define setBackgroundColor setBackground
#define setTextColor setForeground

extern person User;
extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;

QListWidgetItem* current_chat_item = nullptr;

chat::chat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chat)
{
    ui->setupUi(this);
}

chat::~chat()
{
    delete ui;
}

void chat::on_channelpb_clicked()
{
    chat_page = this;

    channel_page->show();

    this->hide();
}

void chat::on_grouppb_clicked()
{
    chat_page = this;

    if(group_page != nullptr){
        group_page->show();
    }
    else{
        groups* g1 = new groups();
        g1->show();
    }

    this->hide();
}

void chat::on_addpb_clicked()
{
    QString s;
    s+=QDir::currentPath()+'/'+User.name+"/chats/"+ui->add_user_lineEdit->text()+".txt";

    if(ui->add_user_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter contact's name first");
    }
    else if(QFile::exists(s)){
        QMessageBox::information(this,"Error","this user has already been added!");
    }
    else
    {
        QMessageBox::information(this,"message","contact successfuly aded");

        QFile file(s);
        file.open(QFile::WriteOnly|QFile::Text);
        file.close();

        ui->list->addItem(ui->add_user_lineEdit->text());
        ui->add_user_lineEdit->clear();
    }
}

void chat::on_actionLOg_out_triggered()
{
    concatenate_string c1;
    c1.addString("logout?username=");
    c1.addString(User.name);
    c1.addString("&password=");
    c1.addString(User.pass);

    qDebug()<<c1.getUrl();

    //send request
    QUrl url2(c1.getUrl());
    QNetworkAccessManager* manager2 = new QNetworkAccessManager();
    QNetworkReply* reply2 = manager2->get(QNetworkRequest(url2));


    QObject::connect(reply2,&QNetworkReply::finished,[=](){

        if(reply2->error()==QNetworkReply::NoError){
            //recive reply
            QByteArray data2 = reply2->readAll();
            qDebug()<<data2;
            QJsonDocument duc2 = QJsonDocument::fromJson(data2);
            QJsonObject obj2 = duc2.object();


            QString code = obj2["code"].toString();

            if(code=="200"){
                QMessageBox::information(this,"info",obj2["message"].toString());

                QString s;
                s+=QDir::currentPath()+'/'+User.name;
                QDir d(s);
                d.removeRecursively();

                this->close();

            }
            else{
                QMessageBox::information(this,"Error",obj2["message"].toString());
            }
        }
        else{
            qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
        }

     });
}

void chat::on_actionGet_chat_lists_triggered()
{
    //check if our user alredy have chat/contact
    concatenate_string  cs;
    cs.addString("getuserlist?token=");
    cs.addString(User.token);

    qDebug()<<cs.getUrl();

    QUrl url_d(cs.getUrl());
    QNetworkAccessManager* manager_d = new QNetworkAccessManager();
    QNetworkReply* reply_d = manager_d->get(QNetworkRequest(url_d));
    QObject::connect(reply_d,&QNetworkReply::finished,[=](){
        if(reply_d->error()==QNetworkReply::NoError){
            //recive reply
            QByteArray data_d = reply_d->readAll();
            qDebug()<<data_d;
            QJsonDocument duc = QJsonDocument::fromJson(data_d);
            QJsonObject obj = duc.object();
            QString code = obj["code"].toString();
            if(code=="200"){

                QMessageBox::information(this,"info",obj["message"].toString());


                QString tmp = obj["message"].toString();
                qDebug()<<tmp;

                QString count;
                for(int i=15; i<tmp.length();++i){

                    count += tmp[i];
                    if(tmp[i+1]=='-'){
                        break;
                    }
                }
                qDebug()<< "Number of chats: " << count;

                QString m;
                ui->list->clear();
                for(int i=0;i<count.toInt();++i){
                    m = "block " + QString::number(i);
                    qDebug()<< m;

                    ui->list->addItem((obj[m].toObject())["user_name"].toString());

                }
                qDebug()<< obj;
            }
            else{
                QMessageBox::information(this,"Error",obj["message"].toString());
            }
        }
        else{
             qDebug()<< "ERROR to recive data from server: "<<reply_d->errorString();
        }
    });

}

void chat::on_list_itemClicked(QListWidgetItem *item)
{
    ui->chat_ted->clear();

    if(current_chat_item==nullptr){
        current_chat_item=item;
        item->setBackgroundColor((QBrush)"light blue");
        item->setTextColor((QBrush)"yellow");
    }
    else{
        current_chat_item->setBackgroundColor((QBrush)"white");
        current_chat_item->setTextColor((QBrush)"black");

        current_chat_item=item;
        item->setBackgroundColor((QBrush)"light blue");
        item->setTextColor((QBrush)"yellow");
    }
}

void chat::on_pushButton_clicked()
{
    if(ui->type_ted->toPlainText()==""){
        QMessageBox::information(this,"message","Type something first");
    }
    else if(current_chat_item==nullptr){
        QMessageBox::information(this,"message","Choose one user to send message");
    }
    else{
        concatenate_string concat;
        concat.addString("sendmessageuser?token=");
        concat.addString(User.token);
        concat.addString("&dst=");
        concat.addString(current_chat_item->text()); ///that is item clicked on listWidget
        concat.addString("&body=");
        concat.addString(ui->type_ted->toPlainText());

        qDebug()<<concat.getUrl();

        //send request
        QUrl url(concat.getUrl());
        QNetworkAccessManager* manager = new QNetworkAccessManager();
        QNetworkReply* reply = manager->get(QNetworkRequest(url));


        QObject::connect(reply,&QNetworkReply::finished,[=](){

            if(reply->error()==QNetworkReply::NoError){
                //recive reply
                QByteArray data = reply->readAll();
                qDebug()<<data;
                QJsonDocument duc = QJsonDocument::fromJson(data);
                QJsonObject obj = duc.object();


                QString code = obj["code"].toString();

                if(code=="200"){
                    ///////append message
                    ui->chat_ted->append(ui->type_ted->toPlainText());
                    QMessageBox::information(this,"message",obj["message"].toString());
                    ///////// clear textEdit type
                    ui->type_ted->clear();
                }
                else{
                    QMessageBox::information(this,"message",obj["message"].toString());
                }
            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply->errorString();
            }

         });
    }
}

void chat::on_pushButton_2_clicked()
{
    if(current_chat_item==nullptr){
        QMessageBox::warning(this,"message","Choose one user");
    }
    else{
    concatenate_string concat;
    concat.addString("getuserchats?token=");
    concat.addString(User.token);
    concat.addString("&dst=");
    concat.addString(current_chat_item->text()); ///that is item clicked on listWidget

    qDebug()<<concat.getUrl();
    //send request
    QUrl url(concat.getUrl());
    QNetworkAccessManager* manager = new QNetworkAccessManager();
    QNetworkReply* reply = manager->get(QNetworkRequest(url));


    QObject::connect(reply,&QNetworkReply::finished,[=](){

        if(reply->error()==QNetworkReply::NoError){
            //recive reply
            QByteArray data = reply->readAll();
            qDebug()<<data;
            QJsonDocument duc = QJsonDocument::fromJson(data);
            QJsonObject obj = duc.object();


            QString code = obj["code"].toString();

            if(code=="200"){
                QMessageBox::information(this,"message",obj["message"].toString());

                QString tmp =obj["message"].toString();
                QString count;

                /////extract number of message
                for(int i=11;i<tmp.length();++i){

                    count+=tmp[i];

                    if(tmp[i+1]=='-')
                        break;
                }

                qDebug()<<"number of message"<<count;

                ///read data from block

                QString b1;
                for(int i=0;i<count.toInt();++i){
                    b1 = "block " + QString::number(i);

                    QString body = (obj[b1].toObject())["body"].toString();
                    QString sender = (obj[b1].toObject())["src"].toString();

                    if(sender == User.name)
                        ui->chat_ted->append("you:");
                    else
                        ui->chat_ted->append(sender+':');

                    ui->chat_ted->append(body);

                }

            }
            else{
                QMessageBox::information(this,"message",obj["message"].toString());
            }
        }
        else{
            qDebug()<< "ERROR to recive data from server: "<<reply->errorString();
        }
    });
 }
}



