#ifndef FIRST_H
#define FIRST_H

#include <QMainWindow>

namespace Ui {
class First;
}

class First : public QMainWindow
{
    Q_OBJECT

public:
    explicit First(QWidget *parent = 0);
    ~First();

private:
    Ui::First *ui;
};

#endif // FIRST_H
