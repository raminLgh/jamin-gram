#include "ui_signup4.h"
#include "signup4.h"
#include "signup3.h"

extern QMainWindow* Prev_ptr;

signup4::signup4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup4)
{
    ui->setupUi(this);
}

signup4::~signup4()
{
    delete ui;
}

void signup4::on_previous_clicked()
{
    delete Prev_ptr;

    signup3* prev_sign3 = new signup3();
    prev_sign3->show();
    this->close();
    Prev_ptr = this;
}


void signup4::on_nextpb_clicked()
{
    delete Prev_ptr;


    this->close();
    Prev_ptr = this;
}

