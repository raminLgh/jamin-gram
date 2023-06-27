#include "chat.h"
#include "ui_chat.h"
#include "channel.h"
#include "groups.h"
#include "concatenate_string.h"

extern person User;
extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;

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
    if(ui->add_user_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter contact's name first");
    }
    else
    {
        QMessageBox::information(this,"info","contact successfuly aded");
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
