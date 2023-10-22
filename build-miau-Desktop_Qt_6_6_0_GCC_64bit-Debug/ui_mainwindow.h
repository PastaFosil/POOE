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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *bienvenir;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *age;
    QListWidget *list_bienvenida;
    QComboBox *comboBox_ocupacion;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *numero1;
    QLineEdit *numero2;
    QListWidget *list_sumar;
    QCheckBox *checkBox_sumar;
    QCheckBox *checkBox_restar;
    QPushButton *calcular;
    QCheckBox *checkbox_multiplicar;
    QCheckBox *checkbox_dividir;
    QGroupBox *groupBox_3;
    QRadioButton *radiomasculinio;
    QRadioButton *radiofemeninio;
    QRadioButton *radiogay;
    QGroupBox *groupBox_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 521);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 341, 281));
        bienvenir = new QPushButton(groupBox);
        bienvenir->setObjectName("bienvenir");
        bienvenir->setGeometry(QRect(130, 100, 87, 26));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 331, 18));
        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(200, 30, 113, 26));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 291, 18));
        age = new QLineEdit(groupBox);
        age->setObjectName("age");
        age->setGeometry(QRect(200, 60, 113, 26));
        list_bienvenida = new QListWidget(groupBox);
        list_bienvenida->setObjectName("list_bienvenida");
        list_bienvenida->setGeometry(QRect(40, 130, 251, 101));
        comboBox_ocupacion = new QComboBox(groupBox);
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->setObjectName("comboBox_ocupacion");
        comboBox_ocupacion->setGeometry(QRect(70, 240, 211, 26));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(360, 10, 431, 461));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 50, 66, 18));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 80, 66, 18));
        numero1 = new QLineEdit(groupBox_2);
        numero1->setObjectName("numero1");
        numero1->setGeometry(QRect(150, 50, 113, 26));
        numero2 = new QLineEdit(groupBox_2);
        numero2->setObjectName("numero2");
        numero2->setGeometry(QRect(150, 80, 113, 26));
        list_sumar = new QListWidget(groupBox_2);
        list_sumar->setObjectName("list_sumar");
        list_sumar->setGeometry(QRect(80, 240, 256, 211));
        checkBox_sumar = new QCheckBox(groupBox_2);
        checkBox_sumar->setObjectName("checkBox_sumar");
        checkBox_sumar->setGeometry(QRect(170, 110, 92, 24));
        checkBox_restar = new QCheckBox(groupBox_2);
        checkBox_restar->setObjectName("checkBox_restar");
        checkBox_restar->setGeometry(QRect(170, 130, 92, 24));
        calcular = new QPushButton(groupBox_2);
        calcular->setObjectName("calcular");
        calcular->setGeometry(QRect(160, 200, 87, 26));
        checkbox_multiplicar = new QCheckBox(groupBox_2);
        checkbox_multiplicar->setObjectName("checkbox_multiplicar");
        checkbox_multiplicar->setGeometry(QRect(170, 150, 92, 24));
        checkbox_dividir = new QCheckBox(groupBox_2);
        checkbox_dividir->setObjectName("checkbox_dividir");
        checkbox_dividir->setGeometry(QRect(170, 170, 92, 24));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 300, 121, 171));
        radiomasculinio = new QRadioButton(groupBox_3);
        radiomasculinio->setObjectName("radiomasculinio");
        radiomasculinio->setGeometry(QRect(20, 30, 109, 24));
        radiofemeninio = new QRadioButton(groupBox_3);
        radiofemeninio->setObjectName("radiofemeninio");
        radiofemeninio->setGeometry(QRect(20, 60, 109, 24));
        radiogay = new QRadioButton(groupBox_3);
        radiogay->setObjectName("radiogay");
        radiogay->setGeometry(QRect(20, 90, 109, 24));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(140, 300, 201, 171));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "bienvenido UwU", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "bienvenida", nullptr));
        bienvenir->setText(QCoreApplication::translate("MainWindow", "\303\222w\303\223", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "introduzca su nombre UwUr", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "introduzca su edad OwO", nullptr));
        comboBox_ocupacion->setItemText(0, QCoreApplication::translate("MainWindow", "ocupaciones disponibles:", nullptr));
        comboBox_ocupacion->setItemText(1, QCoreApplication::translate("MainWindow", "ching cheng chua chuo chichecho ", nullptr));
        comboBox_ocupacion->setItemText(2, QCoreApplication::translate("MainWindow", "presidente", nullptr));
        comboBox_ocupacion->setItemText(3, QCoreApplication::translate("MainWindow", "repartidor de pizzas", nullptr));
        comboBox_ocupacion->setItemText(4, QCoreApplication::translate("MainWindow", "estudiante", nullptr));
        comboBox_ocupacion->setItemText(5, QCoreApplication::translate("MainWindow", "maestro", nullptr));
        comboBox_ocupacion->setItemText(6, QCoreApplication::translate("MainWindow", "alba\303\261il", nullptr));
        comboBox_ocupacion->setItemText(7, QCoreApplication::translate("MainWindow", "cientifico", nullptr));
        comboBox_ocupacion->setItemText(8, QCoreApplication::translate("MainWindow", "vendedor de frutas", nullptr));
        comboBox_ocupacion->setItemText(9, QCoreApplication::translate("MainWindow", "bombero", nullptr));
        comboBox_ocupacion->setItemText(10, QCoreApplication::translate("MainWindow", "policia", nullptr));
        comboBox_ocupacion->setItemText(11, QCoreApplication::translate("MainWindow", "doctor", nullptr));
        comboBox_ocupacion->setItemText(12, QCoreApplication::translate("MainWindow", "astronauta", nullptr));
        comboBox_ocupacion->setItemText(13, QCoreApplication::translate("MainWindow", "tortillero", nullptr));
        comboBox_ocupacion->setItemText(14, QCoreApplication::translate("MainWindow", "pollero", nullptr));
        comboBox_ocupacion->setItemText(15, QCoreApplication::translate("MainWindow", "nini", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "calculadora", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "numero 1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "numero 2", nullptr));
        checkBox_sumar->setText(QCoreApplication::translate("MainWindow", "sumar", nullptr));
        checkBox_restar->setText(QCoreApplication::translate("MainWindow", "restar", nullptr));
        calcular->setText(QCoreApplication::translate("MainWindow", "calcular", nullptr));
        checkbox_multiplicar->setText(QCoreApplication::translate("MainWindow", "multiplicar", nullptr));
        checkbox_dividir->setText(QCoreApplication::translate("MainWindow", "dividir", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "genero", nullptr));
        radiomasculinio->setText(QCoreApplication::translate("MainWindow", "masculino", nullptr));
        radiofemeninio->setText(QCoreApplication::translate("MainWindow", "femenino", nullptr));
        radiogay->setText(QCoreApplication::translate("MainWindow", "gay", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
