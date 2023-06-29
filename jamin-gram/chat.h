#ifndef CHAT_H
#define CHAT_H

#include <QMainWindow>
#include <QTimer>
#include <QListWidgetItem>
#include <QListWidget>


namespace Ui {
class chat;
}

class chat : public QMainWindow
{
    Q_OBJECT

    friend class channel;
    friend class groups;

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();

private slots:
    void on_channelpb_clicked();

    void on_grouppb_clicked();

    void on_addpb_clicked();

    void on_actionLOg_out_triggered();

    void on_actionGet_chat_lists_triggered();

    void on_list_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    QTimer* timer_ca;

    QTimer* timer_list_chat;

    Ui::chat *ui;
};

#endif // CHAT_H
