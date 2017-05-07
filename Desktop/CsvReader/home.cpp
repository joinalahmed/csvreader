#include "home.h"
#include "ui_home.h"
#include "csvreader.h"
#include "ui_quantum.h"
#include "ui_quantum.h"
#include "quantum.h"
Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    connect(ui->start, SIGNAL(clicked()), this, SLOT(starts()));
    connect(ui->about, SIGNAL(clicked()), this, SLOT(about()));
    connect(ui->rc, SIGNAL(clicked()), this, SLOT(rc()));
    connect(ui->qc, SIGNAL(clicked()), this, SLOT(qc()));

}

Home::~Home()
{
    delete ui;
}
void Home::qc()
{
    windows = new Quantum(this);
    //windows->open();
    windows->show();
}
void Home::starts()
{
    //QApplication a(argc, argv);
    window = new CsvReader(this);
    //w.open();
    window->open();
    window->show();
    //return a.exec();
}
void Home::about()
{
    //QApplication a(argc, argv);
    window = new CsvReader(this);
    //w.open();
    window->open();
    window->show();
    //return a.exec();
}
void Home::rc()
{
    std::string filename = "../../Desktop/test/pdf.py";
    std::string command = "python ";
    command += filename;
    system(command.c_str());
}
