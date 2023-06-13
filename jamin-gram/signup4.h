#ifndef SIGNUP4_H
#define SIGNUP4_H

#include <QMainWindow>

namespace Ui {
class signup4;
}

class signup4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup4(QWidget *parent = nullptr);
    ~signup4();

private slots:
    void on_previous_clicked();

    void on_nextpb_clicked();

private:
    Ui::signup4 *ui;
};

#endif // SIGNUP4_H
