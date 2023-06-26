#include "forget.h"
#include "ui_forget.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

extern QMainWindow* Prev_ptr;
extern person User;

forget::forget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::forget)
{
    ui->setupUi(this);
}

forget::~forget()
{
    delete ui;
}

void forget::on_pushButton_clicked()
{
    if(ui->phone->text().length()==0||ui->username->text().length()==0){
        QMessageBox* m1 = new QMessageBox();
        m1->information(this,"forget","Fill all items carefully");
    }
    else{
        QFile file("Information.txt");
        file.open(QFile::ReadOnly|QFile::Text);

        if(file.isOpen()){
            //read data from file
            QString _name;
            QString _phone;
            QString _pasword;

            QTextStream tes(&file);

            while(1){
                tes>>_name>>_phone>>_pasword;

                if(_name==""||_phone==""||_pasword=="")
                    break;

                if(ui->username->text()==_name && ui->phone->text()==_phone){

                    //
                    QMessageBox* m2 = new QMessageBox();
                    QString tmp = "your pasword is : ";
                    tmp+=_pasword;
                    m2->information(this,"forget",tmp);
                    return;

                }

                //just test
                qDebug()<<_name<<_phone<<_pasword;

            }

            //if cant find user in file

            QMessageBox* m3 = new QMessageBox();
            m3->information(this,"forget","User not find");

        }
        else{
            QMessageBox* m2 = new QMessageBox();
            m2->information(this,"forget","File not exist");
        }
    }
}

void forget::on_pushButton_2_clicked()
{
    this->close();
    //prev_ptr is log in page now
    Prev_ptr->show();
}
