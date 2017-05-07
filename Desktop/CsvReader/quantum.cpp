#include "quantum.h"
#include "ui_quantum.h"

Quantum::Quantum(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Quantum)
{
    ui->setupUi(this);
}

Quantum::~Quantum()
{
    delete ui;
}
