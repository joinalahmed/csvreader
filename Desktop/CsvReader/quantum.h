#ifndef QUANTUM_H
#define QUANTUM_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QStandardItemModel>

namespace Ui {
class Quantum;
}

class Quantum : public QMainWindow
{
    Q_OBJECT

public:
    explicit Quantum(QWidget *parent = 0);
    ~Quantum();
    void test1();

private:
    Ui::Quantum *ui;
    QList<QStringList> csv;
    QStandardItemModel *model;
    QList<QStandardItem*> standardItemList;


private slots:
    void on_action_Open_triggered();
    void checkString(QString &temp, QChar character = 0);

};

#endif // QUANTUM_H
