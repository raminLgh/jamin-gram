#include "main_login.h"
#include "ui_main_login.h"

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
        ui->pasword->setEchoMode(QLineEdit::Normal);
    else
        ui->pasword->setEchoMode(QLineEdit::Password);
}

