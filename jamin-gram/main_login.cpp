#include "main_login.h"
#include "ui_main_login.h"
#include "concatenate_string.h"
#include "forget.h"
#include "channel.h"

extern QMainWindow* Prev_ptr;
extern person User;

extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;


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
        QMessageBox::information(this,"Error","Fill the all items carefully");
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
                    QMessageBox::information(this,"message",obj["message"].toString());
                    //new object and get token:
                    User.name= ui->username2->text();
                    User.pass= ui->pasword2->text();
                    User.token= obj["token"].toString();

                    QDir d(QDir::currentPath());
                    d.mkdir(User.name);
                    d.cd(User.name);
                    d.mkdir("channels");
                    d.mkdir("groups");
                    d.mkdir("chats");

                    /////////show next page
                    delete Prev_ptr;
                    channel* ch2 = new channel();
                    ch2->show();
                    this->close();
                    ch2->on_action_Get_channel_list_triggered();
                    //create 3 thread for write on all 3 page file's in channel class in future by an extern json object parameters
                    //create a thread for update messages in current page in channel class
                    ////////

                }
                else {
                    QMessageBox::information(this,"Error",obj["message"].toString());
                }
            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply_d->errorString();
            }

         });
    }

}


void main_login::on_verifypb_2_clicked()
{
    delete Prev_ptr;
    Prev_ptr = this;

    forget* f1 = new forget();
    f1->show();

    this->hide();

}


