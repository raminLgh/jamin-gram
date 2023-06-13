#include "ui_signup3.h"
#include "signup3.h"
#include "signup2.h"
#include "signup4.h"

extern QMainWindow* Prev_ptr;

signup3::signup3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup3)
{
    ui->setupUi(this);
}

signup3::~signup3()
{
    delete ui;
}

void signup3::on_previous_clicked()
{
    delete Prev_ptr;

    signup2* prev_sign2 = new signup2();
    prev_sign2->show();
    this->close();
    Prev_ptr = this;
}

void signup3::on_nextpb_clicked()
{
    delete Prev_ptr;

    signup4* sign4 = new signup4();
    sign4->show();
    this->close();
    Prev_ptr = this;
}
