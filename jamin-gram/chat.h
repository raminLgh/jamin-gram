#ifndef CHAT_H
#define CHAT_H

#include <QMainWindow>

namespace Ui {
class chat;
}

class chat : public QMainWindow
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();

private slots:
    void on_channelpb_clicked();

    void on_grouppb_clicked();

    void on_addpb_clicked();

    void on_actionLOg_out_triggered();

    void on_actionGet_chat_lists_triggered();

private:
    Ui::chat *ui;
};

#endif // CHAT_H
