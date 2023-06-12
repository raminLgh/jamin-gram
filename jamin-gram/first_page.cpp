#include "first_page.h"
#include "ui_first_page.h"

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

