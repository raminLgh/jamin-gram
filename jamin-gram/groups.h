#ifndef GROUPS_H
#define GROUPS_H

#include <QMainWindow>
#include <QTimer>
#include <QListWidgetItem>
#include <QListWidget>


namespace Ui {
class groups;
}

class groups : public QMainWindow
{
    Q_OBJECT

    friend class channel;
    friend class chat;

public:
    explicit groups(QWidget *parent = nullptr);
    ~groups();

private slots:
    void on_channelpb_clicked();

    void on_creatpb_clicked();

    void on_joinpb_clicked();

    void on_actionLog_out_triggered();

    void on_actionGet_group_list_triggered();

    void on_chatpb_clicked();

    void on_list_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    QTimer* timer_g;
    Ui::groups *ui;
};

#endif // GROUPS_H
