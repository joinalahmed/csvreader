#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include "csvreader.h"
#include "quantum.h"
namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    virtual ~Home();

private:
    Ui::Home *ui;
    CsvReader *window;
    Quantum * windows;
private slots:

    void starts();
    void rc();
    void about();
    void qc();
};

#endif // HOME_H
