#include "ui_signup1.h"
#include "signup1.h"
#include "signup2.h"
#include "first_page.h"

extern QMainWindow* Prev_ptr;

signup1::signup1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup1)
{
    ui->setupUi(this);
}

signup1::~signup1()
{
    delete ui;
}

void signup1::on_previous_clicked()
{
    delete Prev_ptr;

    first_page* prev_firstpage = new first_page();
    prev_firstpage->show();
    this->close();
    Prev_ptr = this;
}

void signup1::on_nextpb_clicked()
{
    delete Prev_ptr;

    signup2* sign2 = new signup2();
    sign2->show();
    this->close();
    Prev_ptr = this;
}
