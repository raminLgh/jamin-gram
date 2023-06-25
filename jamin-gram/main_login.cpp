#include "main_login.h"
#include "ui_main_login.h"
#include "concatenate_string.h"

main_login::main_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_login)
{
    ui->setupUi(this);
}

main_login::~main_login()
{
    delete ui;
}



void main_login::on_checkBoxp_clicked(bool checked)
{
    if(checked)
        ui->pasword2->setEchoMode(QLineEdit::Normal);
    else
        ui->pasword2->setEchoMode(QLineEdit::Password);
}


void main_login::on_verifypb_clicked()
{
    if(ui->pasword2->text().length()==0||ui->username2->text().length()==0){
        QMessageBox *notcomplet = new QMessageBox();
        notcomplet->information(this,"Error","Fill all the items carefully");
    }
    else {
        concatenate_string  cs;
        cs.addString("login?username=");
        cs.addString(ui->username2->text());
        cs.addString("&password=");
        cs.addString(ui->pasword2->text());
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
                    QMessageBox* meb = new QMessageBox();
                    meb->information(this,"message",obj["message"].toString());
                    //new object and get token:

                }
                else {
                    QMessageBox* meb2 = new QMessageBox();
                    meb2->information(this,"Error",obj["message"].toString());
                }
            }
            else{
                qDebug()<< "EROOR to recive data from server: "<<reply_d->errorString();
            }

         });
    }

}




