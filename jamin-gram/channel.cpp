#include "channel.h"
#include "ui_channel.h"

//#define setBackgroundColor setBackground
//#define setTextColor setForeground
#define arg_cn 15000
#include <QString>
#include "concatenate_string.h"
#include "groups.h"
#include "chat.h"

extern person User;
extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;

QListWidgetItem* current_channel_item = nullptr;

channel::channel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::channel)
{
    ui->setupUi(this);
    timer_cn = new QTimer();
    connect(timer_cn,SIGNAL(timeout()),this,SLOT(on_pushButton_2_clicked()));
    timer_cn->start(arg_cn);
}

channel::~channel()
{
    delete ui;
    delete timer_cn;
}

void channel::on_creatpb_clicked()
{
    if(ui->cr_chanel_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter channel's name first");
    }
    else
    {
        concatenate_string c1;
        c1.addString("createchannel?token=");
        c1.addString(User.token);
        c1.addString("&channel_name=");
        c1.addString(ui->cr_chanel_lineEdit->text());

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
                    QMessageBox::information(this,"message",obj2["message"].toString());

                    QString s;
                    s+=QDir::currentPath()+'/'+User.name+"/channels/"+ui->cr_chanel_lineEdit->text()+".txt";
                    QFile file(s);
                    file.open(QFile::WriteOnly|QFile::Text);
                    file.close();


                    ui->list->addItem(ui->cr_chanel_lineEdit->text());
                    ui->cr_chanel_lineEdit->clear();

                }
                else{
                    QMessageBox::information(this,"Eror",obj2["message"].toString());
                    ui->cr_chanel_lineEdit->clear();
                }


            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
            }

         });



    }
}

void channel::on_joinpb_clicked()
{
    if(ui->jo_channel_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter channel's name first");
    }
    else
    {
        concatenate_string c1;
        c1.addString("joinchannel?token=");
        c1.addString(User.token);
        c1.addString("&channel_name=");
        c1.addString(ui->jo_channel_lineEdit->text());

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
                    QMessageBox::information(this,"message",obj2["message"].toString());

                    QString s;
                    s+=QDir::currentPath()+'/'+User.name+"/channels/"+ui->jo_channel_lineEdit->text()+".txt";
                    QFile file(s);
                    file.open(QFile::WriteOnly|QFile::Text);
                    file.close();

                    ui->list->addItem(ui->jo_channel_lineEdit->text());
                    ui->jo_channel_lineEdit->clear();
                }
                else{
                    QMessageBox::information(this,"Error",obj2["message"].toString());
                    ui->jo_channel_lineEdit->clear();
                }

            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
            }

         });

    }

}

void channel::on_Logout_triggered()
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
                    if(group_page != nullptr)
                    group_page->close();
                    if(chat_page != nullptr)
                    chat_page->close();
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

void channel::on_grouppb_clicked()
{
    channel_page = this;
    timer_cn->stop();

    if(group_page != nullptr){
        group_page->show();
        dynamic_cast<groups*>(group_page)->timer_g->start(arg_cn);
    }
    else{
    groups* g1 = new groups();
    g1->show();
    }

    this->hide();
}

void channel::on_chatpb_clicked()
{
    channel_page = this;
    timer_cn->stop();

    if(chat_page != nullptr){
        chat_page->show();
        dynamic_cast<chat*>(chat_page)->timer_ca->start(arg_cn);
    }
    else{
    chat* c1 = new chat();
    c1->show();
    }

    this->hide();
}


void channel::on_action_Get_channel_list_triggered()
{
    //check if our user alredy in channel
    concatenate_string  cs;
    cs.addString("getchannellist?token=");
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
                for(int i=0; i<tmp.length();++i){
                   if(tmp[i]=='-'){
                       i++;
                    for(int j = i; j < tmp.length();j++){
                    count += tmp[j];
                    if(tmp[j+1]=='-'){
                        break;
                    }
                   }
                    break;
                }
                }
                qDebug()<< "Number of channels: " << count;

                QString curr;
                if(current_channel_item != nullptr){
                curr = current_channel_item->text();
                current_channel_item = nullptr;
                }

                ui->list->clear();
                QString m;

                for(int i=0;i<count.toInt();++i){

                    m = "block " + QString::number(i);
                    qDebug()<< m;

                    ui->list->addItem((obj[m].toObject())["channel_name"].toString());

                }

                if(curr != ""){
                    for(int i=0; i<ui->list->count(); ++i){
                        if(ui->list->item(i)->text() == curr){
                            current_channel_item = ui->list->item(i);
                            break;
                        }
                    }
                    ui->list->setCurrentItem(current_channel_item);
                    current_channel_item->setBackground((QBrush)"light blue");
                    current_channel_item->setForeground((QBrush)"yellow");
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

void channel::on_list_itemClicked(QListWidgetItem *item)
{
    ui->chat_ted->clear();

    if(current_channel_item==nullptr){
        current_channel_item=item;
        item->setBackground((QBrush)"light blue");
        item->setForeground((QBrush)"yellow");
    }
    else{
        current_channel_item->setBackground((QBrush)"white");
        current_channel_item->setForeground((QBrush)"black");

        current_channel_item=item;
        item->setBackground((QBrush)"light blue");
        item->setForeground((QBrush)"yellow");
    }
    on_pushButton_2_clicked();
}

void channel::on_pushButton_clicked()
{
    if(ui->type_ted->toPlainText()==""){
        QMessageBox::information(this,"message","Type something first");
    }
    else if(current_channel_item==nullptr){
        QMessageBox::information(this,"message","Choose one Channel to send message");
    }
    else{
        concatenate_string c1;
        c1.addString("sendmessagechannel?token=");
        c1.addString(User.token);
        c1.addString("&dst=");
        c1.addString(current_channel_item->text()); ///that is item clicked on listWidget
        c1.addString("&body=");
        c1.addString(ui->type_ted->toPlainText());

        QString accuracy2 = current_channel_item->text();

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
                    if(accuracy2 == current_channel_item->text()){
                    ///////append message
                    // احتمالا باید پاک کنیم این قسمت رو
                    ui->chat_ted->setTextColor(QColor(0, 0, 255));
                    ui->chat_ted->append("you(Admin):");
                    ui->chat_ted->setAlignment(Qt::AlignRight);
                    ui->chat_ted->append(ui->type_ted->toPlainText());
                    //QMessageBox::information(this,"message",obj2["message"].toString());
                    ///////// clear textEdit type
                    }
                    ui->type_ted->clear();
                }
                else{
                    QMessageBox::information(this,"message",obj2["message"].toString());
                }
            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
            }

         });
    }
}



void channel::on_pushButton_2_clicked()
{
    if(current_channel_item==nullptr){
        //QMessageBox::warning(this,"message","Choose one channel");
    }
    else{
    concatenate_string c1;
    c1.addString("getchannelchats?token=");
    c1.addString(User.token);
    c1.addString("&dst=");
    c1.addString(current_channel_item->text()); ///that is item clicked on listWidget
    QString accuracy = current_channel_item->text();

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
                //QMessageBox::information(this,"message",obj2["message"].toString());
                if(accuracy == current_channel_item->text()){

                QString tmp =obj2["message"].toString();

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

                QString b1;
                for(int i=0;i<count.toInt();++i){
                    b1 = "block " + QString::number(i);

                    QString body = (obj2[b1].toObject())["body"].toString();
                    QString sender = (obj2[b1].toObject())["src"].toString();

                    if(sender == User.name){
                        ui->chat_ted->setTextColor(QColor(0, 0, 255));
                        ui->chat_ted->append("you(Admin):");
                        ui->chat_ted->setAlignment(Qt::AlignRight);
                        ui->chat_ted->append(body);
                    }
                    else{
                        ui->chat_ted->setTextColor(QColor(255, 70, 0));
                        ui->chat_ted->append(sender+"(Admin):");
                        ui->chat_ted->setAlignment(Qt::AlignLeft);
                        ui->chat_ted->append(body);
                    }


                }
                }


            }
            else{
                QMessageBox::information(this,"message",obj2["message"].toString());
            }
        }
        else{
            qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
        }
    });
 }
}
