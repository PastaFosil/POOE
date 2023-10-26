/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
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
    QGroupBox *groupBox_e1;
    QLabel *label;
    QLineEdit *lineEdit_t1;
    QGroupBox *groupBox_e2;
    QLabel *label_2;
    QLineEdit *lineEdit_v2;
    QLabel *label_3;
    QLineEdit *lineEdit_t2;
    QGroupBox *groupBox_e3;
    QLabel *label_4;
    QLineEdit *lineEdit_m3;
    QLabel *label_5;
    QLineEdit *lineEdit_v3;
    QGroupBox *groupBox_e4;
    QLabel *label_6;
    QLineEdit *lineEdit_k4;
    QLabel *label_7;
    QLineEdit *lineEdit_x4;
    QGroupBox *groupBox_e5;
    QLabel *label_8;
    QLineEdit *lineEdit_h5;
    QPushButton *pushButton_calcular;
    QGroupBox *groupBox;
    QListWidget *listWidget_resultados;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_e1;
    QCheckBox *checkBox_e4;
    QCheckBox *checkBox_e2;
    QCheckBox *checkBox_e5;
    QCheckBox *checkBox_e3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 670);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_e1 = new QGroupBox(centralwidget);
        groupBox_e1->setObjectName("groupBox_e1");
        groupBox_e1->setEnabled(false);
        groupBox_e1->setGeometry(QRect(30, 180, 201, 201));
        label = new QLabel(groupBox_e1);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 111, 16));
        lineEdit_t1 = new QLineEdit(groupBox_e1);
        lineEdit_t1->setObjectName("lineEdit_t1");
        lineEdit_t1->setGeometry(QRect(20, 50, 113, 22));
        groupBox_e2 = new QGroupBox(centralwidget);
        groupBox_e2->setObjectName("groupBox_e2");
        groupBox_e2->setEnabled(false);
        groupBox_e2->setGeometry(QRect(250, 180, 191, 201));
        label_2 = new QLabel(groupBox_e2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 30, 131, 16));
        lineEdit_v2 = new QLineEdit(groupBox_e2);
        lineEdit_v2->setObjectName("lineEdit_v2");
        lineEdit_v2->setGeometry(QRect(20, 50, 113, 22));
        label_3 = new QLabel(groupBox_e2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 80, 111, 16));
        lineEdit_t2 = new QLineEdit(groupBox_e2);
        lineEdit_t2->setObjectName("lineEdit_t2");
        lineEdit_t2->setGeometry(QRect(20, 100, 113, 22));
        groupBox_e3 = new QGroupBox(centralwidget);
        groupBox_e3->setObjectName("groupBox_e3");
        groupBox_e3->setEnabled(false);
        groupBox_e3->setGeometry(QRect(460, 180, 201, 201));
        label_4 = new QLabel(groupBox_e3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 30, 101, 16));
        lineEdit_m3 = new QLineEdit(groupBox_e3);
        lineEdit_m3->setObjectName("lineEdit_m3");
        lineEdit_m3->setGeometry(QRect(20, 50, 113, 22));
        label_5 = new QLabel(groupBox_e3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 80, 121, 16));
        lineEdit_v3 = new QLineEdit(groupBox_e3);
        lineEdit_v3->setObjectName("lineEdit_v3");
        lineEdit_v3->setGeometry(QRect(20, 100, 113, 22));
        groupBox_e4 = new QGroupBox(centralwidget);
        groupBox_e4->setObjectName("groupBox_e4");
        groupBox_e4->setEnabled(false);
        groupBox_e4->setGeometry(QRect(30, 400, 201, 211));
        label_6 = new QLabel(groupBox_e4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 30, 201, 16));
        lineEdit_k4 = new QLineEdit(groupBox_e4);
        lineEdit_k4->setObjectName("lineEdit_k4");
        lineEdit_k4->setGeometry(QRect(10, 50, 113, 22));
        label_7 = new QLabel(groupBox_e4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 80, 191, 16));
        lineEdit_x4 = new QLineEdit(groupBox_e4);
        lineEdit_x4->setObjectName("lineEdit_x4");
        lineEdit_x4->setGeometry(QRect(10, 110, 113, 22));
        groupBox_e5 = new QGroupBox(centralwidget);
        groupBox_e5->setObjectName("groupBox_e5");
        groupBox_e5->setEnabled(false);
        groupBox_e5->setGeometry(QRect(250, 400, 191, 211));
        label_8 = new QLabel(groupBox_e5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 30, 131, 16));
        lineEdit_h5 = new QLineEdit(groupBox_e5);
        lineEdit_h5->setObjectName("lineEdit_h5");
        lineEdit_h5->setGeometry(QRect(10, 50, 113, 22));
        pushButton_calcular = new QPushButton(centralwidget);
        pushButton_calcular->setObjectName("pushButton_calcular");
        pushButton_calcular->setGeometry(QRect(500, 460, 121, 61));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        pushButton_calcular->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(290, 20, 371, 151));
        listWidget_resultados = new QListWidget(groupBox);
        listWidget_resultados->setObjectName("listWidget_resultados");
        listWidget_resultados->setGeometry(QRect(40, 30, 311, 111));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 20, 201, 151));
        checkBox_e1 = new QCheckBox(groupBox_2);
        checkBox_e1->setObjectName("checkBox_e1");
        checkBox_e1->setGeometry(QRect(20, 30, 83, 21));
        checkBox_e4 = new QCheckBox(groupBox_2);
        checkBox_e4->setObjectName("checkBox_e4");
        checkBox_e4->setGeometry(QRect(110, 30, 83, 21));
        checkBox_e2 = new QCheckBox(groupBox_2);
        checkBox_e2->setObjectName("checkBox_e2");
        checkBox_e2->setGeometry(QRect(20, 60, 83, 21));
        checkBox_e5 = new QCheckBox(groupBox_2);
        checkBox_e5->setObjectName("checkBox_e5");
        checkBox_e5->setGeometry(QRect(110, 60, 83, 21));
        checkBox_e3 = new QCheckBox(groupBox_2);
        checkBox_e3->setObjectName("checkBox_e3");
        checkBox_e3->setGeometry(QRect(20, 90, 83, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
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
        groupBox_e1->setTitle(QCoreApplication::translate("MainWindow", "Ejercicio 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ingrese el tiempo:", nullptr));
        groupBox_e2->setTitle(QCoreApplication::translate("MainWindow", "Ejercicio 2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ingrese la velocidad:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ingrese el tiempo:", nullptr));
        groupBox_e3->setTitle(QCoreApplication::translate("MainWindow", "Ejercicio 3", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ingrese la masa:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Ingrese la velocidad:", nullptr));
        groupBox_e4->setTitle(QCoreApplication::translate("MainWindow", "Ejercicio 4", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Ingrese constante de resorte:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ingrese desplazamiento inicial:", nullptr));
        groupBox_e5->setTitle(QCoreApplication::translate("MainWindow", "Ejercicio 5", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ingrese altura inicial:", nullptr));
        pushButton_calcular->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Resultados", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Opciones", nullptr));
        checkBox_e1->setText(QCoreApplication::translate("MainWindow", "Ejercicio 1", nullptr));
        checkBox_e4->setText(QCoreApplication::translate("MainWindow", "Ejercicio 4", nullptr));
        checkBox_e2->setText(QCoreApplication::translate("MainWindow", "Ejercicio 2", nullptr));
        checkBox_e5->setText(QCoreApplication::translate("MainWindow", "Ejercicio 5", nullptr));
        checkBox_e3->setText(QCoreApplication::translate("MainWindow", "Ejercicio 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
