#include "csvreader.h"
#include "QElapsedTimer"
#include "ui_csvreader.h"
#include "iostream"
#include "string"
CsvReader::CsvReader(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CsvReader)
{
ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(reverse()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(play()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(ttable()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(tfc()));
    connect(ui->pushButton_22, SIGNAL(clicked()), this, SLOT(patterns()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(sa0()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(sa1()));
    connect(ui->pushButton_11, SIGNAL(clicked()), this, SLOT(crossD()));
    connect(ui->pushButton_10, SIGNAL(clicked()), this, SLOT(crossA()));
    connect(ui->pushButton_12, SIGNAL(clicked()), this, SLOT(bridgeA()));
    connect(ui->pushButton_13, SIGNAL(clicked()), this, SLOT(bridgeO()));
    connect(ui->pushButton_17, SIGNAL(clicked()), this, SLOT(smgf()));
    connect(ui->pushButton_18, SIGNAL(clicked()), this, SLOT(rmgf()));
    connect(ui->pushButton_19, SIGNAL(clicked()), this, SLOT(mmgf()));
    connect(ui->pushButton_20, SIGNAL(clicked()), this, SLOT(pmgf()));
}

void CsvReader::smgf()
{
     std::string filename = "../../Desktop/test/smfg.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}


void CsvReader::rmgf()
{
     std::string filename = "../../Desktop/test/rmgf.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}



void CsvReader::mmgf()
{
     std::string filename = "../../Desktop/test/mmgf.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}




void CsvReader::pmgf()
{
     std::string filename = "../../Desktop/test/pmgf.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}


void CsvReader::bridgeA()
{
     std::string filename = "../../Desktop/test/bridge_and.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}
void CsvReader::bridgeO()
{
     std::string filename = "../../Desktop/test/bridge_or.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}
void CsvReader::crossD()
{
     std::string filename = "../../Desktop/test/cross_diss.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}
void CsvReader::crossA()
{
     std::string filename = "../../Desktop/test/appear_cross.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}

void CsvReader::sa0()
{
     std::string filename = "../../Desktop/test/stuck0.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}
void CsvReader::sa1()
{
     std::string filename = "../../Desktop/test/stuck1.py";
     std::string command = "python ";
     command += filename;
     system(command.c_str());
     std::string filenames = "../../Desktop/test/f_dis.py";
     std::string commands = "python ";
     commands += filenames;
     system(commands.c_str());

}
void CsvReader::patterns()
{    std::string filename = "../../Desktop/test/test_min.py";
     std::string commands = "python ";
     commands += filename;
     system(commands.c_str());
     std::string filenames = "../../Desktop/test/pattern_dis.py";
     std::string command = "python ";
     command += filenames;
     system(command.c_str());

}
void CsvReader::reverse()
{   QElapsedTimer MyTime;
    MyTime.start();
    std::string filenames = "../../Desktop/test/reverse.py";
    std::string command = "python ";
    command += filenames;
    system(command.c_str());
    double abc=MyTime.elapsed();
    ui->label_6->setText(QString::number(abc)+"miliseconds");
    std::string filename = "../../Desktop/test/r_dis.py";
    std::string commands = " python ";
    commands += filename;
    system(commands.c_str());







}
void CsvReader::play()
{
    std::string filenames = "../../Desktop/test/smart_ui.py";
    std::string command = "python ";
    command += filenames;
    system(command.c_str());
    std::string filename = "../../Desktop/test/smart_dis.py";
    std::string commands = "python ";
    commands += filename;
    system(commands.c_str());


}
void CsvReader::tfc()
{
    std::string filename = "../../Desktop/test/current_tfc.py";
    std::string commands = "python ";
    commands += filename;
    system(commands.c_str());

}
void CsvReader::ttable()
{
    std::string filename = "../../Desktop/test/tt_display.py";
    std::string commands = "python ";
    commands += filename;
    system(commands.c_str());

}

CsvReader::~CsvReader()
{
    delete ui;
}

void CsvReader::on_action_Open_triggered()
{
    model = new QStandardItemModel(this);
    ui->tableView->setModel(model);
    QString fileName_tfc = QFileDialog::getOpenFileName (this, "Select TFC File",
                                                     "../../Desktop/test/tfc", "TFC (*.tfc)");
    std::string images=fileName_tfc.toStdString();
    images=images.substr(0,images.length()-3);
    images.append("JPG");
    QString name=QString::fromStdString(images);

    ui->label_6->setText(fileName_tfc);
    ui->label_7->setText("File Currently Open :-");

    if (QFile::exists("../../Desktop/test/a.tfc"))
    {
        QFile::remove("../../Desktop/test/a.tfc");
    }

    QFile::copy(fileName_tfc, "../../Desktop/test/a.tfc");
    std::string filenames = "../../Desktop/test/truth_gen.py";
    std::string command = "python ";
    QElapsedTimer MyTime;
    MyTime.start();
    command += filenames;
    system(command.c_str());
    float abc=(float)MyTime.elapsed()*0.001;
    ui->label_21->setText(QString::number(abc)+" Seconds");
    QImage image(name);
    ui->label->setPixmap(QPixmap::fromImage(image));
    QString fileName="../../Desktop/test/correct_output.csv";
    QFile file (fileName);
    if (file.open(QIODevice::ReadOnly)) {
        QString data = file.readAll();
        data.remove( QRegExp("\r") ); //remove all ocurrences of CR (Carriage Return)
        QString temp;
        QChar character;
        QTextStream textStream(&data);
        while (!textStream.atEnd()) {
            textStream >> character;
            if (character == ',') {
                checkString(temp, character);
            } else if (character == '\n') {
                checkString(temp, character);
            } else if (textStream.atEnd()) {
                temp.append(character);
                checkString(temp);
            } else {
                temp.append(character);
            }
        }
    }

test1();
}
void CsvReader::open(){
    on_action_Open_triggered();
}

void CsvReader::on_action_About_triggered()
{
    std::string filenames = "../../Desktop/test/about.py";
    std::string command = "python ";
    command += filenames;
    system(command.c_str());

}



void CsvReader::test1()
{
    model = new QStandardItemModel(this);
    ui->tableView_3->setModel(model);
    std::string details = "../../Desktop/test/detail.py";
    std::string commands = "python ";
    commands += details;
    QElapsedTimer MyTime;
    MyTime.start();
    system(commands.c_str());

    float abc=(float)MyTime.elapsed()*0.001;
    ui->label_19->setText(QString::number(abc)+" Seconds");
    QString fileName="../../Desktop/test/details.csv";

    QFile file (fileName);
    if (file.open(QIODevice::ReadOnly)) {
        QString data = file.readAll();
        data.remove( QRegExp("\r") ); //remove all ocurrences of CR (Carriage Return)
        QString temp;
        QChar character;
        QTextStream textStream(&data);
        while (!textStream.atEnd()) {
            textStream >> character;
            if (character == ',') {
                checkString(temp, character);
            } else if (character == '\n') {
                checkString(temp, character);
            } else if (textStream.atEnd()) {
                temp.append(character);
                checkString(temp);
            } else {
                temp.append(character);
            }
        }
    }
    ui->tableView_3->resizeColumnsToContents();
}
void CsvReader::checkString(QString &temp, QChar character)
{
    if(temp.count("\"")%2 == 0) {
        //if (temp.size() == 0 && character != ',') //problem with line endings
        //    return;
        if (temp.startsWith( QChar('\"')) && temp.endsWith( QChar('\"') ) ) {
             temp.remove( QRegExp("^\"") );
             temp.remove( QRegExp("\"$") );
        }
        temp.replace("\"\"", "\"");
        QStandardItem *item = new QStandardItem(temp);
        standardItemList.append(item);
        if (character != QChar(',')) {
            model->appendRow(standardItemList);
            standardItemList.clear();
        }
        temp.clear();
    } else {
        temp.append(character);
    }
}
