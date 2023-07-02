#ifndef CHANNEL_H
#define CHANNEL_H

#include <QMainWindow>
#include <QColor>
#include <QListWidgetItem>
#include <QListWidget>
#include <QTimer>


namespace Ui {
class channel;
}

class channel : public QMainWindow
{
    Q_OBJECT

    friend class groups;
    friend class chat;

public:
    explicit channel(QWidget *parent = nullptr);
    ~channel();

    void write_data();

public slots:

    void on_action_Get_channel_list_triggered();

private slots:

    void on_creatpb_clicked();

    void on_joinpb_clicked();

    void on_Logout_triggered();

    void on_grouppb_clicked();

    void on_chatpb_clicked();

    void on_pushButton_clicked();

    void on_list_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_actionExit_triggered();

    void on_actionSwitch_account_triggered();

private:
    QTimer* timer_cn;

    Ui::channel *ui;
};

#endif // CHANNEL_H
