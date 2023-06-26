#ifndef GROUPS_H
#define GROUPS_H

#include <QMainWindow>

namespace Ui {
class groups;
}

class groups : public QMainWindow
{
    Q_OBJECT

public:
    explicit groups(QWidget *parent = nullptr);
    ~groups();

private slots:
    void on_channelpb_clicked();

    void on_creatpb_clicked();

    void on_joinpb_clicked();

    void on_actionLog_out_triggered();

private:
    Ui::groups *ui;
};

#endif // GROUPS_H
