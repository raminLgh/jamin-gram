#include "first_page.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    first_page w;
    w.setWindowTitle("jamin gram");
    w.setWindowFlags(Qt::Dialog);
    w.show();
    return a.exec();
}
