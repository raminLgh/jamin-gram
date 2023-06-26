#include "groups.h"
#include "ui_groups.h"
#include <QString>
#include "concatenate_string.h"
#include "channel.h"

extern person User;
extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;

groups::groups(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::groups)
{
    ui->setupUi(this);
}

groups::~groups()
{
    delete ui;
}

void groups::on_channelpb_clicked()
{
    group_page = this;

    channel* ch = new channel();
    ch->show();

    this->hide();
}


void groups::on_creatpb_clicked()
{
    if(ui->cr_group_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter channel's name first");
    }
    else
    {
        concatenate_string c2;
        c2.addString("creategroup?token=");
        c2.addString(User.token);
        c2.addString("&group_name=");
        c2.addString(ui->cr_group_lineEdit->text());

        qDebug()<<c2.getUrl();

        //send request
        QUrl url2(c2.getUrl());
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

                    ui->list->addItem(ui->cr_group_lineEdit->text());
                    ui->cr_group_lineEdit->clear();
                }
                else{
                    QMessageBox::information(this,"Eror",obj2["message"].toString());
                    ui->cr_group_lineEdit->clear();
                }
            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
            }
        });
    }
}


void groups::on_joinpb_clicked()
{
    if(ui->jo_group_lineEdit->text().length()==0){
        QMessageBox::information(this,"Error","Enter channel's name first");
    }
    else
    {
        concatenate_string cs;
        cs.addString("joingroup?token=");
        cs.addString(User.token);
        cs.addString("&group_name=");
        cs.addString(ui->jo_group_lineEdit->text());

        qDebug()<<cs.getUrl();


        //send request
        QUrl url3(cs.getUrl());
        QNetworkAccessManager* manager3 = new QNetworkAccessManager();
        QNetworkReply* reply3 = manager3->get(QNetworkRequest(url3));


        QObject::connect(reply3,&QNetworkReply::finished,[=](){

            if(reply3->error()==QNetworkReply::NoError){
                //recive reply
                QByteArray data3 = reply3->readAll();
                qDebug()<<data3;
                QJsonDocument duc3 = QJsonDocument::fromJson(data3);
                QJsonObject obj3 = duc3.object();


                QString code = obj3["code"].toString();

                if(code=="200"){
                    QMessageBox::information(this,"message",obj3["message"].toString());

                    ui->list->addItem(ui->jo_group_lineEdit->text());
                    ui->jo_group_lineEdit->clear();
                }
                else{
                    QMessageBox::information(this,"Eror",obj3["message"].toString());
                    ui->jo_group_lineEdit->clear();
                }

            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply3->errorString();
            }

         });

    }
}


void groups::on_actionLog_out_triggered()
{
    concatenate_string cs;
    cs.addString("logout?username=");
    cs.addString(User.name);
    cs.addString("&password=");
    cs.addString(User.pass);

    qDebug()<<cs.getUrl();

    //send request
    QUrl url(cs.getUrl());
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
                QMessageBox::information(this,"info",obj["message"].toString());

                this->close();
            }
            else{
                QMessageBox::information(this,"Eror",obj["message"].toString());
            }
        }
        else{
            qDebug()<< "ERROR to recive data from server: "<<reply->errorString();
        }

     });

}

