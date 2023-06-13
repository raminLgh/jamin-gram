#include "ui_first_page.h"
#include "first_page.h"
#include "signup1.h"

QMainWindow* Prev_ptr = nullptr;

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
    this->close();
    sign1->show();
    Prev_ptr = this;
}
