/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *labelName;
    QLabel *labelGPA;
    QLabel *labelFather;
    QLabel *labelRoll;
    QLabel *labelDistrict;
    QLineEdit *lineEditName;
    QLineEdit *lineEditGPA;
    QLineEdit *lineEditFather;
    QLineEdit *lineEditCaste;
    QLineEdit *lineEditRoll;
    QLineEdit *lineEditDistrict;
    QLabel *labelCaste;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonNext;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonDelete;
    QPushButton *pushButton;
    QLineEdit *lineEditRoll_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(998, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 127)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 0, 651, 61));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Times New Roman\";"));
        labelName = new QLabel(centralwidget);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(220, 140, 161, 31));
        labelName->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        labelGPA = new QLabel(centralwidget);
        labelGPA->setObjectName("labelGPA");
        labelGPA->setGeometry(QRect(220, 430, 161, 31));
        labelGPA->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        labelFather = new QLabel(centralwidget);
        labelFather->setObjectName("labelFather");
        labelFather->setGeometry(QRect(220, 200, 161, 31));
        labelFather->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        labelRoll = new QLabel(centralwidget);
        labelRoll->setObjectName("labelRoll");
        labelRoll->setGeometry(QRect(220, 380, 161, 31));
        labelRoll->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        labelDistrict = new QLabel(centralwidget);
        labelDistrict->setObjectName("labelDistrict");
        labelDistrict->setGeometry(QRect(220, 320, 161, 31));
        labelDistrict->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(440, 140, 241, 41));
        lineEditGPA = new QLineEdit(centralwidget);
        lineEditGPA->setObjectName("lineEditGPA");
        lineEditGPA->setGeometry(QRect(440, 440, 241, 41));
        lineEditGPA->setStyleSheet(QString::fromUtf8("text-color : rgb(0, 0, 0)"));
        lineEditFather = new QLineEdit(centralwidget);
        lineEditFather->setObjectName("lineEditFather");
        lineEditFather->setGeometry(QRect(440, 200, 241, 41));
        lineEditCaste = new QLineEdit(centralwidget);
        lineEditCaste->setObjectName("lineEditCaste");
        lineEditCaste->setGeometry(QRect(440, 260, 241, 41));
        lineEditRoll = new QLineEdit(centralwidget);
        lineEditRoll->setObjectName("lineEditRoll");
        lineEditRoll->setGeometry(QRect(440, 380, 241, 41));
        lineEditDistrict = new QLineEdit(centralwidget);
        lineEditDistrict->setObjectName("lineEditDistrict");
        lineEditDistrict->setGeometry(QRect(440, 320, 241, 41));
        labelCaste = new QLabel(centralwidget);
        labelCaste->setObjectName("labelCaste");
        labelCaste->setGeometry(QRect(220, 260, 161, 31));
        labelCaste->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName("pushButtonAdd");
        pushButtonAdd->setGeometry(QRect(160, 500, 121, 41));
        pushButtonAdd->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"\n"
"background-color : rgb(255, 243, 251)\n"
""));
        pushButtonNext = new QPushButton(centralwidget);
        pushButtonNext->setObjectName("pushButtonNext");
        pushButtonNext->setGeometry(QRect(750, 140, 121, 41));
        pushButtonNext->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"\n"
"background-color : rgb(255, 243, 251)"));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setGeometry(QRect(430, 500, 121, 41));
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"background-color : rgb(255, 243, 251)"));
        pushButtonDelete = new QPushButton(centralwidget);
        pushButtonDelete->setObjectName("pushButtonDelete");
        pushButtonDelete->setGeometry(QRect(680, 500, 121, 41));
        pushButtonDelete->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";\n"
"\n"
"background-color : rgb(255, 243, 251)"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 80, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
"background-color : rgb(255, 243, 251)\n"
"\n"
"\n"
"\n"
""));
        lineEditRoll_2 = new QLineEdit(centralwidget);
        lineEditRoll_2->setObjectName("lineEditRoll_2");
        lineEditRoll_2->setGeometry(QRect(230, 80, 201, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 998, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; color:#ffffff;\">Student Record Management System</span></p></body></html>", nullptr));
        labelName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">Student Name</span></p></body></html>", nullptr));
        labelGPA->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">GPA</span></p></body></html>", nullptr));
        labelFather->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">Father Name</span></p></body></html>", nullptr));
        labelRoll->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">Roll No</span></p></body></html>", nullptr));
        labelDistrict->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">District</span></p></body></html>", nullptr));
        lineEditName->setText(QString());
#if QT_CONFIG(whatsthis)
        lineEditGPA->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#ffffff;\">mahnoor </span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelCaste->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">Caste</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        pushButtonAdd->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonAdd->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        pushButtonNext->setText(QCoreApplication::translate("MainWindow", "NEXT", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "UPDATE", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">SEARCH</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">SEARCH </span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("MainWindow", "SEARCH ", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
