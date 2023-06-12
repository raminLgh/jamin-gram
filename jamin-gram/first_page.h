#ifndef FIRST_PAGE_H
#define FIRST_PAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class first_page; }
QT_END_NAMESPACE

class first_page : public QMainWindow
{
    Q_OBJECT

public:
    first_page(QWidget *parent = nullptr);
    ~first_page();

private slots:
    void on_signup_clicked();

private:
    Ui::first_page *ui;
};
#endif // FIRST_PAGE_H
