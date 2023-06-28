#ifndef CHANNEL_H
#define CHANNEL_H

#include <QMainWindow>

#include <QListWidgetItem>
#include <QListWidget>


namespace Ui {
class channel;
}

class channel : public QMainWindow
{
    Q_OBJECT

public:
    explicit channel(QWidget *parent = nullptr);
    ~channel();

private slots:
    void on_creatpb_clicked();

    void on_joinpb_clicked();

    void on_Logout_triggered();

    void on_grouppb_clicked();

    void on_action_Get_channel_list_triggered();

    void on_chatpb_clicked();

    void on_pushButton_clicked();

    void on_list_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

private:
    Ui::channel *ui;
};

#endif // CHANNEL_H
