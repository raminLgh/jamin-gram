#include "main_singup.h"
#include "ui_main_singup.h"
#include "concatenate_string.h"
#include <QTextStream>
#include "channel.h"

extern QMainWindow* Prev_ptr;
extern person User;

extern QMainWindow* channel_page;
extern QMainWindow* group_page ;
extern QMainWindow* chat_page ;


main_singup::main_singup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_singup)
{
    ui->setupUi(this);
}

main_singup::~main_singup()
{
    delete ui;
}



void main_singup::on_checkBoxp_clicked(bool checked)
{
    if(checked)
        ui->pasword->setEchoMode(QLineEdit::Normal);
    else
        ui->pasword->setEchoMode(QLineEdit::Password);
}

void main_singup::on_checkBoxrp_clicked(bool checked)
{
    if(checked)
        ui->repasword->setEchoMode(QLineEdit::Normal);
    else
        ui->repasword->setEchoMode(QLineEdit::Password);
}

void main_singup::on_verifypb_clicked()
{
    if(ui->Email->text().length()==0||ui->phone->text().length()==0||ui->pasword->text().length()==0
            ||ui->lastname->text().length()==0||ui->username->text().length()==0||
            ui->firstname->text().length()==0||ui->repasword->text().length()==0)
    {
        QMessageBox::information(this,"Error","Fill all the items carefully");
    }
    else if(ui->pasword->text()!=ui->repasword->text()){
        QMessageBox::information(this,"Error","You entered the password incorrectly");
    }
    //in above code we sure about our user fill item carefully and now we can connect to server
    else{
        //creat our url
        concatenate_string  c1;
        c1.addString("signup?username=");
        c1.addString(ui->username->text());
        c1.addString("&password=");
        c1.addString(ui->pasword->text());
        qDebug()<<c1.getUrl();
        QString _username = ui->username->text();
        QString _password = ui->pasword->text();
        QString _phone = ui->phone->text();

        //send request
        QUrl url(c1.getUrl());
        QNetworkAccessManager* manager = new QNetworkAccessManager();
        QNetworkReply* reply = manager->get(QNetworkRequest(url));


        QObject::connect(reply,&QNetworkReply::finished,[=](){

            if(reply->error()==QNetworkReply::NoError){
                //recive reply
                QByteArray data = reply->readAll();

                QJsonDocument duc = QJsonDocument::fromJson(data);
                QJsonObject obj = duc.object();

                QString code = obj["code"].toString();

                //user Successfully aded
                if(code=="200"){
                    QMessageBox::information(this,"message",obj["message"].toString());

                    QFile file("Information.txt");
                    file.open(QFile::ReadOnly|QFile::WriteOnly|QFile::Append|QFile::Text);
                    if(file.isOpen()){
                        QTextStream ts(&file);
                        ts<<_username<<" "<< _phone <<" "<<_password<<'\n';
                        qDebug()<< "work with file";
                        file.close();
                    }

                    //log in user to recive token
                    ///////////////////////start

                    //creat our url
                    concatenate_string  c2;
                    c2.addString("login?username=");
                    c2.addString(_username);
                    c2.addString("&password=");
                    c2.addString(_password);
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

                            //new object and get token:
                            User.name= _username;
                            User.pass= _password;
                            User.token= obj2["token"].toString();

                            QDir d(QDir::currentPath());
                            d.mkdir(User.name);
                            d.cd(User.name);
                            d.mkdir("channels");
                            d.mkdir("groups");
                            d.mkdir("chats");


                            ////// show next page
                            delete Prev_ptr;
                            channel* ch1 = new channel();
                            ch1->show();
                            this->close();
                            ch1->on_action_Get_channel_list_triggered();
                            ///

                        }
                        else{
                            qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
                        }

                     });

                    //////////////////////////end
                }
                else {
                    QMessageBox::information(this,"Error",obj["message"].toString());

                }

            }
            else{
                qDebug()<< "ERROR to recive data from server: "<<reply->errorString();
            }
        });

    }

}
