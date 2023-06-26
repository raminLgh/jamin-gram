#ifndef FORGET_H
#define FORGET_H

#include <QMainWindow>

typedef struct Person{
   QString name;
   QString pass;
   QString token;
} person;

namespace Ui {
class forget;
}

class forget : public QMainWindow
{
    Q_OBJECT

public:
    explicit forget(QWidget *parent = nullptr);
    ~forget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::forget *ui;
};

#endif // FORGET_H
