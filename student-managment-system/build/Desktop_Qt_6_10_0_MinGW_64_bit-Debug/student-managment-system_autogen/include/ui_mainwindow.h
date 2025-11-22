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
    QLineEdit *lineEditfFather;
    QLineEdit *lineEditCaste;
    QLineEdit *lineEditRoll;
    QLineEdit *lineEditDistrict;
    QLabel *labelCaste;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonNext;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonDelete;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(998, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 50, 651, 61));
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Times New Roman\";"));
        labelName = new QLabel(centralwidget);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(220, 150, 161, 31));
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
        lineEditfFather = new QLineEdit(centralwidget);
        lineEditfFather->setObjectName("lineEditfFather");
        lineEditfFather->setGeometry(QRect(440, 200, 241, 41));
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
        pushButtonAdd->setGeometry(QRect(160, 500, 121, 31));
        pushButtonAdd->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        pushButtonNext = new QPushButton(centralwidget);
        pushButtonNext->setObjectName("pushButtonNext");
        pushButtonNext->setGeometry(QRect(750, 140, 121, 31));
        pushButtonNext->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setGeometry(QRect(330, 500, 121, 31));
        pushButtonUpdate->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        pushButtonDelete = new QPushButton(centralwidget);
        pushButtonDelete->setObjectName("pushButtonDelete");
        pushButtonDelete->setGeometry(QRect(490, 500, 121, 31));
        pushButtonDelete->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Times New Roman\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 998, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Student Record Management System</p></body></html>", nullptr));
        labelName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Student Name</p></body></html>", nullptr));
        labelGPA->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>GPA</p></body></html>", nullptr));
        labelFather->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Father Name</p></body></html>", nullptr));
        labelRoll->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Roll No</p></body></html>", nullptr));
        labelDistrict->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>District</p></body></html>", nullptr));
        labelCaste->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Caste</p></body></html>", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        pushButtonNext->setText(QCoreApplication::translate("MainWindow", "NEXT", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "UPDATE", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
