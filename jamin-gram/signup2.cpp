#include "ui_signup2.h"
#include "signup2.h"
#include "signup3.h"
#include "signup1.h"

extern QMainWindow* Prev_ptr;

signup2::signup2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup2)
{
    ui->setupUi(this);
}

signup2::~signup2()
{
    delete ui;
}

void signup2::on_previous_clicked()
{
    delete Prev_ptr;

    signup1* prev_sign1 = new signup1();
    prev_sign1->show();
    this->close();
    Prev_ptr = this;
}

void signup2::on_nextpb_clicked()
{
    delete Prev_ptr;

    signup3* sign3 = new signup3();
    sign3->show();
    this->close();
    Prev_ptr = this;
}

