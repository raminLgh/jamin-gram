#include "signup2.h"
#include "ui_signup2.h"

#include "signup1.h"

signup2::signup2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup2)
{
    ui->setupUi(this);

    setWindowTitle("signup2");
}

signup2::~signup2()
{
    delete ui;
}

void signup2::on_previous_clicked()
{
    this->close();
    signup1* ps1 = new signup1();
    ps1->show();
}
