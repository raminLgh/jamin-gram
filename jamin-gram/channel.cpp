#include "channel.h"
#include "ui_channel.h"

#include <QMessageBox>
#include <QDebug>
#include <QString>

#include "first_page.h"
#include "concatenate_string.h"

extern person User;


extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;

channel::channel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::channel)
{
    ui->setupUi(this);
}

channel::~channel()
{
    delete ui;
}

void channel::on_creatpb_clicked()
{
    if(ui->cr_chanel_lineEdit->text().length()==0){
        QMessageBox *notcomplet = new QMessageBox();
        notcomplet->information(this,"Error","Enter channel's name first");
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
                    QMessageBox *m1 = new QMessageBox();
                    m1->information(this,"info",obj2["message"].toString());

                    ui->list->addItem(ui->cr_chanel_lineEdit->text());
                    ui->cr_chanel_lineEdit->clear();
                }
                else{
                    QMessageBox *m2 = new QMessageBox();
                    m2->information(this,"Eror",obj2["message"].toString());
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
        QMessageBox *notcomplet = new QMessageBox();
        notcomplet->information(this,"Error","Enter channel's name first");
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
                    QMessageBox *m3 = new QMessageBox();
                    m3->information(this,"info",obj2["message"].toString());

                    ui->list->addItem(ui->jo_channel_lineEdit->text());
                    ui->jo_channel_lineEdit->clear();
                }
                else{
                    QMessageBox *m4 = new QMessageBox();
                    m4->information(this,"Eror",obj2["message"].toString());
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
                    QMessageBox *m1 = new QMessageBox();
                    m1->information(this,"info",obj2["message"].toString());

                    this->close();

                }
                else{
                    QMessageBox *m2 = new QMessageBox();
                    m2->information(this,"Eror",obj2["message"].toString());
                }
            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
            }

         });
}