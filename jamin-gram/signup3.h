#ifndef SIGNUP3_H
#define SIGNUP3_H

#include <QMainWindow>

namespace Ui {
class signup3;
}

class signup3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup3(QWidget *parent = nullptr);
    ~signup3();

private slots:
    void on_previous_clicked();

    void on_nextpb_clicked();

private:
    Ui::signup3 *ui;
};

#endif // SIGNUP3_H
