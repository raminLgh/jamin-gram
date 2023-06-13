#ifndef SIGNUP2_H
#define SIGNUP2_H

#include <QMainWindow>

namespace Ui {
class signup2;
}

class signup2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup2(QWidget *parent = nullptr);
    ~signup2();

private slots:
    void on_previous_clicked();

    void on_nextpb_clicked();

private:
    Ui::signup2 *ui;
};

#endif // SIGNUP2_H
