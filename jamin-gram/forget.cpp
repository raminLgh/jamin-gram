#include "forget.h"
#include "ui_forget.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "concatenate_string.h"

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
        QMessageBox::information(this,"forget","Fill all items carefully");
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
                    QString tmp = "your pasword is : ";
                    tmp+=_pasword;
                    QMessageBox::information(this,"forget",tmp);
                    file.close();
                    return;

                }

                //just test
                qDebug()<<_name<<_phone<<_pasword;

            }

            //if cant find user in file

            QMessageBox::information(this,"forget","User not find");
            file.close();
        }
        else{
            QMessageBox::information(this,"forget","User not find");
        }
    }
}

void forget::on_pushButton_2_clicked()
{
    this->close();
    //prev_ptr is log_in page now
    Prev_ptr->show();
    Prev_ptr = this;
}
