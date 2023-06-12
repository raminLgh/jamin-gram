#include "first_page.h"
#include "ui_first_page.h"

#include "signup1.h"

first_page::first_page(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::first_page)
{
    ui->setupUi(this);
}

first_page::~first_page()
{
    delete ui;
}


void first_page::on_signup_clicked()
{
    this->close();

    signup1* p1 = new signup1();
    p1->show();

}
