/********************************************************************************
** Form generated from reading UI file 'csvreader.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSVREADER_H
#define UI_CSVREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CsvReader
{
public:
    QAction *action_Open;
    QAction *action_About;
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label;
    QTableView *tableView_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QFrame *line_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_5;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QFrame *line_7;
    QPushButton *pushButton_20;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_22;
    QFrame *line_8;
    QFrame *line_5;
    QFrame *line_9;
    QFrame *line_10;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *line_11;
    QFrame *line_6;
    QFrame *line_12;
    QLabel *label_12;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QLabel *label_13;
    QFrame *line_16;
    QFrame *line_17;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuAbout;

    void setupUi(QMainWindow *CsvReader)
    {
        if (CsvReader->objectName().isEmpty())
            CsvReader->setObjectName(QStringLiteral("CsvReader"));
        CsvReader->resize(1376, 781);
        CsvReader->setAutoFillBackground(false);
        CsvReader->setStyleSheet(QStringLiteral("background-color: rgb(144, 164, 174);"));
        action_Open = new QAction(CsvReader);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        action_About = new QAction(CsvReader);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(CsvReader);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(true);
        tableView->setGeometry(QRect(1150, 80, 201, 411));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(214, 210, 208, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(170, 170, 170, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tableView->setPalette(palette);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        tableView->setFont(font);
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(214, 210, 208);"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setGridStyle(Qt::DashLine);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 70, 831, 421));
        label->setStyleSheet(QStringLiteral(""));
        tableView_3 = new QTableView(centralWidget);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(20, 80, 271, 411));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        tableView_3->setFont(font1);
        tableView_3->setLayoutDirection(Qt::LeftToRight);
        tableView_3->setStyleSheet(QStringLiteral("background-color: rgb(214, 210, 208);"));
        tableView_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_3->setGridStyle(Qt::DashLine);
        tableView_3->horizontalHeader()->setVisible(false);
        tableView_3->horizontalHeader()->setCascadingSectionResizes(false);
        tableView_3->horizontalHeader()->setHighlightSections(false);
        tableView_3->horizontalHeader()->setMinimumSectionSize(46);
        tableView_3->verticalHeader()->setVisible(false);
        tableView_3->verticalHeader()->setHighlightSections(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 231, 20));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 30, 161, 20));
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1170, 30, 161, 20));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 530, 1351, 20));
        line->setStyleSheet(QStringLiteral(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 630, 181, 27));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 660, 181, 27));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 600, 181, 27));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 560, 181, 27));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(230, 540, 20, 191));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(260, 690, 181, 27));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(260, 650, 181, 27));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(480, 650, 181, 27));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(620, 560, 241, 20));
        label_5->setFont(font2);
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(480, 690, 181, 27));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(700, 690, 181, 27));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(700, 650, 181, 27));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(920, 650, 181, 27));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(1150, 690, 181, 27));
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(920, 690, 181, 27));
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(1350, 540, 20, 201));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(1150, 650, 181, 27));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(590, 520, 591, 13));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(433, 520, 141, 13));
        label_7->setMinimumSize(QSize(141, 0));
        pushButton_22 = new QPushButton(centralWidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(40, 700, 181, 27));
        line_8 = new QFrame(centralWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(1120, 650, 20, 81));
        line_8->setStyleSheet(QStringLiteral(""));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 540, 20, 201));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(10, 730, 1351, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(250, 590, 1101, 20));
        line_10->setStyleSheet(QStringLiteral(""));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 610, 101, 20));
        label_8->setFont(font2);
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 610, 131, 20));
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(750, 610, 101, 20));
        label_10->setFont(font2);
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1060, 610, 131, 20));
        label_11->setFont(font2);
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(890, 600, 20, 131));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(670, 600, 20, 131));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(centralWidget);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(450, 600, 20, 131));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 540, 1341, 201));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 60, 1341, 20));
        line_3->setStyleSheet(QStringLiteral(""));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 0, 1351, 20));
        line_4->setStyleSheet(QStringLiteral(""));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralWidget);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(10, 480, 1351, 20));
        line_13->setStyleSheet(QStringLiteral(""));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralWidget);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(1350, 10, 20, 481));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(centralWidget);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(0, 10, 20, 461));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 10, 1341, 61));
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        line_16 = new QFrame(centralWidget);
        line_16->setObjectName(QStringLiteral("line_16"));
        line_16->setGeometry(QRect(290, 10, 20, 481));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(centralWidget);
        line_17->setObjectName(QStringLiteral("line_17"));
        line_17->setGeometry(QRect(1130, 10, 20, 481));
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 740, 1391, 51));
        label_14->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(-10, -20, 1391, 31));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(1360, 10, 21, 731));
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(-10, 10, 21, 731));
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(125, 234, 255);"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 500, 71, 21));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_18->setFont(font3);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(100, 500, 191, 21));
        label_19->setFont(font3);
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(1150, 500, 71, 21));
        label_20->setFont(font3);
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(1230, 500, 121, 20));
        label_21->setFont(font3);
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 520, 151, 16));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(1180, 520, 161, 16));
        CsvReader->setCentralWidget(centralWidget);
        label_13->raise();
        label_12->raise();
        tableView->raise();
        label->raise();
        tableView_3->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        line->raise();
        pushButton->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        line_2->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        label_5->raise();
        pushButton_11->raise();
        pushButton_12->raise();
        pushButton_13->raise();
        pushButton_17->raise();
        pushButton_18->raise();
        pushButton_19->raise();
        line_7->raise();
        pushButton_20->raise();
        label_6->raise();
        label_7->raise();
        pushButton_22->raise();
        line_8->raise();
        line_5->raise();
        line_9->raise();
        line_10->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        line_11->raise();
        line_6->raise();
        line_12->raise();
        line_3->raise();
        line_4->raise();
        line_13->raise();
        line_14->raise();
        line_15->raise();
        line_16->raise();
        line_17->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        menuBar = new QMenuBar(CsvReader);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1376, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        CsvReader->setMenuBar(menuBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menu_File->addAction(action_Open);
        menuAbout->addAction(action_About);

        retranslateUi(CsvReader);

        QMetaObject::connectSlotsByName(CsvReader);
    } // setupUi

    void retranslateUi(QMainWindow *CsvReader)
    {
        CsvReader->setWindowTitle(QApplication::translate("CsvReader", "RC-Tool", 0));
        action_Open->setText(QApplication::translate("CsvReader", "&Open", 0));
        action_About->setText(QApplication::translate("CsvReader", "About", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("CsvReader", "CIRCUIT  LEVEL DETAILS", 0));
        label_3->setText(QApplication::translate("CsvReader", "CIRCUIT  IMAGE", 0));
        label_4->setText(QApplication::translate("CsvReader", "CIRCUIT  OUTPUT", 0));
        pushButton->setText(QApplication::translate("CsvReader", "REVERSE CIRCUIT", 0));
        pushButton_4->setText(QApplication::translate("CsvReader", "SMART SIMULATION", 0));
        pushButton_5->setText(QApplication::translate("CsvReader", "LEVELWISE OUTPUT", 0));
        pushButton_6->setText(QApplication::translate("CsvReader", "VIEW .TFC FILE", 0));
        pushButton_8->setText(QApplication::translate("CsvReader", "STUCK-AT-1", 0));
        pushButton_9->setText(QApplication::translate("CsvReader", "STUCK-AT-0", 0));
        pushButton_10->setText(QApplication::translate("CsvReader", "CROSSPOINT APPEARENCE", 0));
        label_5->setText(QApplication::translate("CsvReader", "INJECT FAULTS IN CIRCUIT", 0));
        pushButton_11->setText(QApplication::translate("CsvReader", "CROSSPOINT DISSAPPEARANCE", 0));
        pushButton_12->setText(QApplication::translate("CsvReader", "BRIDGING-AND", 0));
        pushButton_13->setText(QApplication::translate("CsvReader", "BRIDGING-OR", 0));
        pushButton_17->setText(QApplication::translate("CsvReader", "SINGLE-MGF", 0));
        pushButton_18->setText(QApplication::translate("CsvReader", "REPEATED GATE", 0));
        pushButton_19->setText(QApplication::translate("CsvReader", "MULTIPLE-MGF", 0));
        pushButton_20->setText(QApplication::translate("CsvReader", "PARTIAL - MGF", 0));
        label_6->setText(QString());
        label_7->setText(QString());
        pushButton_22->setText(QApplication::translate("CsvReader", "TEST PATTERNS", 0));
        label_8->setText(QApplication::translate("CsvReader", "STUCK-AT", 0));
        label_9->setText(QApplication::translate("CsvReader", "CROSSPOINT", 0));
        label_10->setText(QApplication::translate("CsvReader", "BRIDGING", 0));
        label_11->setText(QApplication::translate("CsvReader", "GATE FAULTS", 0));
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QApplication::translate("CsvReader", "CPU Time :", 0));
        label_19->setText(QApplication::translate("CsvReader", "TextLabel", 0));
        label_20->setText(QApplication::translate("CsvReader", "CPU Time :", 0));
        label_21->setText(QApplication::translate("CsvReader", "TextLabel", 0));
        label_22->setText(QApplication::translate("CsvReader", "(Circuit Details Extraction)", 0));
        label_23->setText(QApplication::translate("CsvReader", "(Truth Table Generation)", 0));
        menu_File->setTitle(QApplication::translate("CsvReader", "&File", 0));
        menuAbout->setTitle(QApplication::translate("CsvReader", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class CsvReader: public Ui_CsvReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSVREADER_H
