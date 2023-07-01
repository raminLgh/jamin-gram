#include "chat.h"
#include "ui_chat.h"
#include "channel.h"
#include "groups.h"
#include "concatenate_string.h"

//#define setBackgroundColor setBackground
//#define setTextColor setForeground
#define arg_ca 15000
#define time_t 15000

QString save_prv_count3 = "0";

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
    timer_ca = new QTimer();
    connect(timer_ca,SIGNAL(timeout()),this,SLOT(on_pushButton_2_clicked()));
    timer_ca->start(arg_ca);

    ///////////////////////////

    timer_list_chat = new QTimer();
    connect(timer_list_chat,SIGNAL(timeout()),this,SLOT(on_actionGet_chat_lists_triggered()));
    timer_list_chat->start(time_t);

}

chat::~chat()
{
    delete ui;
    delete timer_ca;
    delete timer_list_chat;
}

void chat::on_channelpb_clicked()
{
    chat_page = this;
    timer_ca->stop();
    timer_list_chat->stop();

    channel_page->setGeometry(this->geometry());
    channel_page->show();
    dynamic_cast<channel*>(channel_page)->timer_cn->start(arg_ca);
    ////first update
    dynamic_cast<channel*>(channel_page)->on_pushButton_2_clicked();

    this->hide();
}

void chat::on_grouppb_clicked()
{
    chat_page = this;
    timer_ca->stop();
    timer_list_chat->stop();

    if(group_page != nullptr){
        group_page->setGeometry(this->geometry());
        group_page->show();
        dynamic_cast<groups*>(group_page)->timer_g->start(arg_ca);
        /////first update
        dynamic_cast<groups*>(group_page)->on_pushButton_2_clicked();
    }
    else{
        groups* g1 = new groups();
        g1->setGeometry(this->geometry());
        g1->show();
        g1->on_actionGet_group_list_triggered();
    }

    this->hide();
}

void chat::on_addpb_clicked()
{
    QString b;
    b+=QDir::currentPath()+'/'+User.name+"/chats/"+ui->add_user_lineEdit->text()+".txt";

    if(ui->add_user_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter contact's name first");
    }
    else if(QFile::exists(b)){
        QMessageBox::warning(this,"Error","this user has already been added!");
        ui->add_user_lineEdit->clear();
    }
    else
    {
        //QMessageBox::information(this,"message","contact successfuly aded");
        //we check if user exist in server we add it

        qDebug()<<"sa";
        concatenate_string concat;
        concat.addString("sendmessageuser?token=");
        concat.addString(User.token);
        concat.addString("&dst=");
        concat.addString(ui->add_user_lineEdit->text()); ///that is item clicked on listWidget
        concat.addString("&body=");
        concat.addString("");
        qDebug()<<"sa2";
        QString accuracy2 = ui->chat_ted->toPlainText(); //////////save name

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
                qDebug()<<obj["code"].toString();

                QString code = obj["code"].toString();

                if(code=="200"){
                    QMessageBox::information(this,"message","contact successfuly aded");
                    ui->list->addItem(ui->add_user_lineEdit->text());
                    ui->add_user_lineEdit->clear();
                    QString s;
                    s+=QDir::currentPath()+'/'+User.name+"/chats/"+ui->add_user_lineEdit->text()+".txt";
                    QFile file(s);
                    file.open(QFile::WriteOnly|QFile::Text);
                    file.close();
                }
                else{
                    //\"Destination User Not Found\", \"code\": \"404\

                    QMessageBox::warning(this,"message","Destination User Not Found");
                    ui->add_user_lineEdit->clear();
                }

            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply->errorString();
            }

         });
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
                if(channel_page != nullptr)
                channel_page->close();
                if(group_page != nullptr)
                group_page->close();

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

                //QMessageBox::information(this,"info",obj["message"].toString());


                QString tmp = obj["message"].toString();
                qDebug()<<tmp;

                QString count;
                for(int i=0; i<tmp.length();++i){
                   if(tmp[i]=='-'){
                       i++;
                    for(int j =i; j < tmp.length();j++){
                    count += tmp[j];
                    if(tmp[j+1]=='-'){
                        break;
                    }
                   }
                    break;
                }
                }
                qDebug()<< "Number of chats: " << count;

                QString curr;
                if(current_chat_item != nullptr){
                curr = current_chat_item->text();
                current_chat_item = nullptr;
                }

                ui->list->clear();
                QString m;

                for(int i=0;i<count.toInt();++i){
                    m = "block " + QString::number(i);
                    qDebug()<< m;

                    ///////////////////////
                    QString s;
                    s+=QDir::currentPath()+'/'+User.name+"/chats/"+(obj[m].toObject())["src"].toString()+".txt";
                    QFile file(s);
                    if(!file.exists()){
                        qDebug()<<s;
                        qDebug()<<"file is open";
                        file.open(QFile::WriteOnly|QFile::Text);
                        if(file.isOpen()){
                            qDebug()<<"in file";
                        }
                        file.close();

                    }
                    /////////////////////////

                    ui->list->addItem((obj[m].toObject())["src"].toString());

                }

                if(curr != ""){
                    for(int i=0; i<ui->list->count(); ++i){
                        if(ui->list->item(i)->text() == curr){
                            current_chat_item = ui->list->item(i);
                            break;
                        }
                    }
                    ui->list->setCurrentItem(current_chat_item);
                    current_chat_item->setBackground((QBrush)"light blue");
                    current_chat_item->setForeground((QBrush)"yellow");
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
        item->setBackground((QBrush)"light blue");
        item->setForeground((QBrush)"yellow");
    }
    else{
        current_chat_item->setBackground((QBrush)"white");
        current_chat_item->setForeground((QBrush)"black");

        current_chat_item=item;
        item->setBackground((QBrush)"light blue");
        item->setForeground((QBrush)"yellow");
    }
    on_pushButton_2_clicked();
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

        QString accuracy2 = current_chat_item->text();

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
                    if(accuracy2 == current_chat_item->text()){
                    ///////append message
                    ui->chat_ted->setTextColor(QColor(0, 0, 255));
                    ui->chat_ted->append("you:");
                    ui->chat_ted->setAlignment(Qt::AlignRight);
                    ui->chat_ted->append(ui->type_ted->toPlainText());
                    //QMessageBox::information(this,"message",obj["message"].toString());
                    }
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
        //QMessageBox::warning(this,"message","Choose one user");
    }
    else{
    concatenate_string concat;
    concat.addString("getuserchats?token=");
    concat.addString(User.token);
    concat.addString("&dst=");
    concat.addString(current_chat_item->text()); ///that is item clicked on listWidget
    QString accuracy = current_chat_item->text();

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
                //QMessageBox::information(this,"message",obj["message"].toString());
                if(accuracy == current_chat_item->text()){

                QString tmp =obj["message"].toString();
                QString count;

                /////extract number of message
                for(int i=0; i<tmp.length();++i){
                   if(tmp[i]=='-'){
                       i++;
                    for(int j =i; j < tmp.length();j++){
                    count += tmp[j];
                    if(tmp[j+1]=='-'){
                        break;
                    }
                   }
                    break;
                }
                }

                qDebug()<<"number of message"<<count;

                ///read data from block
                ui->chat_ted->clear();

                ///////////////
                //work whit file
                QString s;
                s+=QDir::currentPath()+'/'+User.name+"/chats/"+accuracy+".txt";
                QFile file(s);
                /////////////////
                file.open(QFile::ReadOnly|QFile::WriteOnly|QFile::Text);


                QString b1;
                for(int i=0;i<count.toInt();++i){
                    b1 = "block " + QString::number(i);

                    QString body = (obj[b1].toObject())["body"].toString();
                    QString sender = (obj[b1].toObject())["src"].toString();

                if(body!=""){

                    if(save_prv_count3!=count){
                        if(file.isOpen()){
                            QTextStream out(&file);
                            out<<sender<<" "<<body<<"\n";
                            qDebug()<<"we in and write";
                        }
                        else
                            qDebug()<<"file can't open421";
                    }

                    if(sender == User.name){
                        ui->chat_ted->setTextColor(QColor(0, 0, 255));
                        ui->chat_ted->append("you:");
                        ui->chat_ted->setAlignment(Qt::AlignRight);
                        ui->chat_ted->append(body);
                    }
                    else{
                        ui->chat_ted->setTextColor(QColor(255, 70, 0));
                        ui->chat_ted->append(sender+':');
                        ui->chat_ted->setAlignment(Qt::AlignLeft);
                        ui->chat_ted->append(body);
                    }
                  }
                }
                save_prv_count3=count;
                file.close();

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



