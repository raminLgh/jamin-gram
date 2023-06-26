#ifndef CHANNEL_H
#define CHANNEL_H

#include <QMainWindow>

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

    void on_actionExit_triggered();

private:
    Ui::channel *ui;
};

#endif // CHANNEL_H
