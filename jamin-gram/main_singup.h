#ifndef MAIN_SINGUP_H
#define MAIN_SINGUP_H

#include <QMainWindow>

namespace Ui {
class main_singup;
}

class main_singup : public QMainWindow
{
    Q_OBJECT

public:
    explicit main_singup(QWidget *parent = nullptr);
    ~main_singup();



private slots:
    void on_checkBoxp_clicked(bool checked);

    void on_checkBoxrp_clicked(bool checked);

    void on_verifypb_clicked();

private:
    Ui::main_singup *ui;
};

#endif // MAIN_SINGUP_H
