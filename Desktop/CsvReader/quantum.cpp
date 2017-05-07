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
void Quantum::on_action_Open_triggered()
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
    std::string filenames = "../../Desktop/test/rc_to_qc.py";
    std::string command = "python ";

    command += filenames;
    system(command.c_str());
    std::string filename = "../../Desktop/test/truth_gen.py";
    std::string commands = "python ";

    commands += filename;
    system(commands.c_str());

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
void Quantum::test1()
{
    model = new QStandardItemModel(this);
    ui->tableView_3->setModel(model);
    std::string details = "../../Desktop/test/qc_detail.py";
    std::string commands = "python ";
    commands += details;
    system(commands.c_str());
    QString fileName="../../Desktop/test/qc_details.csv";

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

void Quantum::checkString(QString &temp, QChar character)
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





