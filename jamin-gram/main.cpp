#include "first_page.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    first_page* fp = new first_page();
    fp->show();
    return a.exec();
}
