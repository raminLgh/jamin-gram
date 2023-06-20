#include "main_singup.h"
#include "ui_main_singup.h"

#include <QMessageBox>

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
        QMessageBox *notcomplet = new QMessageBox();
        notcomplet->setText("Fill all the items carefully");
        notcomplet->setWindowTitle("Error");
        notcomplet->show();
    }
    else if(ui->pasword->text()!=ui->repasword->text()){
        QMessageBox *pasworderor = new QMessageBox();
        pasworderor->setText("You entered the password incorrectly");
        pasworderor->setWindowTitle("Error");
        pasworderor->show();
    }

}
