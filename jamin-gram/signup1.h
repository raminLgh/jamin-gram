#ifndef SIGNUP1_H
#define SIGNUP1_H

#include <QMainWindow>

namespace Ui {
class signup1;
}

class signup1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup1(QWidget *parent = nullptr);
    ~signup1();

private slots:
    void on_previous_clicked();

    void on_nextpb_clicked();

private:
    Ui::signup1 *ui;
};

#endif // SIGNUP1_H
