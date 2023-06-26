#include "main_singup.h"
#include "ui_main_singup.h"
#include "concatenate_string.h"
#include <QFile>
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
        QMessageBox *notcomplet = new QMessageBox(this);
        notcomplet->setText("Fill all the items carefully");
        notcomplet->setWindowTitle("Error");
        notcomplet->show();
    }
    else if(ui->pasword->text()!=ui->repasword->text()){
        QMessageBox *pasworderor = new QMessageBox(this);
        pasworderor->setText("You entered the password incorrectly");
        pasworderor->setWindowTitle("Error");
        pasworderor->show();
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
                    QMessageBox* meb1 = new QMessageBox(this);
                    meb1->setText(obj["message"].toString());
                    meb1->setWindowTitle("message");
                    meb1->show();

                    QFile file("Information.txt");
                    file.open(QFile::ReadOnly|QFile::WriteOnly|QFile::Append|QFile::Text);
                    if(file.isOpen()){
                        QTextStream ts(&file);
                        ts<<ui->username->text()<<" "<< ui->phone->text() <<" "<<ui->pasword->text()<<'\n';
                        qDebug()<< "work with file";
                        file.close();
                    }

                    //log in user to recive token
                    ///////////////////////start

                    //creat our url
                    concatenate_string  c2;
                    c2.addString("login?username=");
                    c2.addString(ui->username->text());
                    c2.addString("&password=");
                    c2.addString(ui->pasword->text());
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
                            User.name= ui->username->text();
                            User.pass= ui->pasword->text();
                            User.token= obj2["token"].toString();


                            ////// show next page
                            channel* ch1 = new channel();
                            this->close();
                            ch1->show();
                            channel_page = ch1;
                            ///

                        }
                        else{
                            qDebug()<< "ERROR to recive data from server: "<<reply2->errorString();
                        }

                     });

                    //////////////////////////end
                }
                else {
                    QMessageBox* meb2 = new QMessageBox(this);
                    meb2->setText(obj["message"].toString());
                    meb2->setWindowTitle("Error");
                    meb2->show();

                }

            }
            else{
                qDebug()<< "EROOR to recive data from server: "<<reply->errorString();
            }
        });

    }

}
