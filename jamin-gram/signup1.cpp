#include "signup1.h"
#include "ui_signup1.h"

#include "first_page.h"
#include "signup2.h"

signup1::signup1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup1)
{
    ui->setupUi(this);

    setWindowTitle("signup1");
}

signup1::~signup1()
{
    delete ui;
}

void signup1::on_previous_clicked()
{
    this->close();
    first_page* fp1 = new first_page();
    fp1->show();
}

void signup1::on_nextpb_clicked()
{
    this->close();
    signup2* ps = new signup2();
    ps->show();
}
