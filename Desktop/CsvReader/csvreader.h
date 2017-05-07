
#ifndef CSVREADER_H
#define CSVREADER_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QStandardItemModel>

namespace Ui {
class CsvReader;
}

class CsvReader : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CsvReader(QWidget *parent = 0);
    void test();
    void test1();
    ~CsvReader();
    void open();

    
private slots:
    void on_action_Open_triggered();
    void on_action_About_triggered();
    void checkString(QString &temp, QChar character = 0);

    void play();
    void tfc();
    void ttable();
    void reverse();
    void patterns();
    void sa0();
    void sa1();
    void crossD();
    void crossA();
    void bridgeA();
    void bridgeO();
    void smgf();
    void rmgf();
    void mmgf();
    void pmgf();

private:
    Ui::CsvReader *ui;
    QList<QStringList> csv;
    QStandardItemModel *model;
    QList<QStandardItem*> standardItemList;

};

#endif // CSVREADER_H
