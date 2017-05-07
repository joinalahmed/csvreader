#ifndef QUANTUM_H
#define QUANTUM_H

#include <QMainWindow>

namespace Ui {
class Quantum;
}

class Quantum : public QMainWindow
{
    Q_OBJECT

public:
    explicit Quantum(QWidget *parent = 0);
    ~Quantum();

private:
    Ui::Quantum *ui;
};

#endif // QUANTUM_H
