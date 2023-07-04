#include "ui_first_page.h"
#include "first_page.h"
#include "signup1.h"
#include "main_login.h"
#include "channel.h"
#include "concatenate_string.h"

QMainWindow* Prev_ptr = nullptr;
person User;

QMainWindow* channel_page = nullptr;
QMainWindow* group_page = nullptr;
QMainWindow* chat_page = nullptr;

first_page::first_page(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::first_page)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog);
}

first_page::~first_page()
{
    delete ui;
}


void first_page::on_signup_clicked()
{
    delete Prev_ptr;

    signup1* sign1 = new signup1();
    sign1->show();
    this->close();

    Prev_ptr = this;
}

void first_page::on_login_clicked()
{
    delete Prev_ptr;

    main_login * mainlog = new main_login();
    mainlog->show();
    this->close();

    Prev_ptr = this;
}


void first_page::on_addpb_clicked()
{
    if(ui->offline->text()==""){
        QMessageBox::information(nullptr,"attention","please type your user_name");
    }
    else{
    QString s;
    s+=QDir::currentPath()+'/'+ ui->offline->text();

    QDir dir(s);
    qDebug()<<s;

    if(dir.exists()){
        qDebug()<<"open folder succesfuly";

        s+="/channel_list.txt";
        QFile file(s);
        file.open(QFile::ReadWrite|QFile::Text);
        qDebug()<<s;

        if(file.isOpen()){
            qDebug()<< "open channel_list.txt seccesfuly";
            QTextStream in(&file);

            QString _token;
            QString _name;
            QString _pass;
            in>>_token>>_name>>_pass;
            User.token =_token;
            User.name = _name;
            User.pass = _pass;

            file.close();
            qDebug()<<_token<<" "<<_name<<" "<<_pass;
        }
        else{
            qDebug()<<"can not open channel_list.txt";


        }
        delete Prev_ptr;

        channel* ch = new channel();
        ch->show();
        this->close();
        ch->on_action_Get_channel_list_triggered();
    }
    else{
        qDebug()<< "dir is note exist";
         QMessageBox::information(nullptr,"attention","User not found!");

       }
    }
}
