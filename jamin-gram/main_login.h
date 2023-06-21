#ifndef MAIN_LOGIN_H
#define MAIN_LOGIN_H

#include <QMainWindow>

namespace Ui {
class main_login;
}

class main_login : public QMainWindow
{
    Q_OBJECT

public:
    explicit main_login(QWidget *parent = nullptr);
    ~main_login();

private slots:


    void on_checkBoxp_clicked(bool checked);

private:
    Ui::main_login *ui;
};

#endif // MAIN_LOGIN_H
