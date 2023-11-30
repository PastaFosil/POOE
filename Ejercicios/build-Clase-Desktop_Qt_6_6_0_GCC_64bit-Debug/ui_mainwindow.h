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
    QLabel *label;
    QLineEdit *name;
    QLineEdit *age;
    QLabel *label_2;
    QComboBox *comboBox_ocupacion;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_masculino;
    QRadioButton *radioButton_femenino;
    QRadioButton *radioButton_otro;
    QListWidget *listWidget_bienvenida;
    QPushButton *pushButton_saludo;
    QGroupBox *groupBox_3;
    QLineEdit *x;
    QLineEdit *y;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox_suma;
    QCheckBox *checkBox_resta;
    QCheckBox *checkBox_multiplicacion;
    QCheckBox *checkBox_division;
    QPushButton *pushButton_calcular;
    QListWidget *listWidget_calcular;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 291, 131));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 121, 16));
        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(130, 30, 113, 22));
        age = new QLineEdit(groupBox);
        age->setObjectName("age");
        age->setGeometry(QRect(130, 60, 113, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 101, 16));
        comboBox_ocupacion = new QComboBox(groupBox);
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->setObjectName("comboBox_ocupacion");
        comboBox_ocupacion->setGeometry(QRect(10, 90, 231, 23));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 150, 291, 61));
        radioButton_masculino = new QRadioButton(groupBox_2);
        radioButton_masculino->setObjectName("radioButton_masculino");
        radioButton_masculino->setGeometry(QRect(10, 30, 100, 21));
        radioButton_femenino = new QRadioButton(groupBox_2);
        radioButton_femenino->setObjectName("radioButton_femenino");
        radioButton_femenino->setGeometry(QRect(100, 30, 100, 21));
        radioButton_otro = new QRadioButton(groupBox_2);
        radioButton_otro->setObjectName("radioButton_otro");
        radioButton_otro->setGeometry(QRect(210, 30, 61, 21));
        listWidget_bienvenida = new QListWidget(centralwidget);
        listWidget_bienvenida->setObjectName("listWidget_bienvenida");
        listWidget_bienvenida->setGeometry(QRect(10, 250, 291, 192));
        pushButton_saludo = new QPushButton(centralwidget);
        pushButton_saludo->setObjectName("pushButton_saludo");
        pushButton_saludo->setGeometry(QRect(110, 220, 80, 23));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(310, 10, 301, 431));
        x = new QLineEdit(groupBox_3);
        x->setObjectName("x");
        x->setGeometry(QRect(30, 30, 113, 22));
        y = new QLineEdit(groupBox_3);
        y->setObjectName("y");
        y->setGeometry(QRect(30, 60, 113, 22));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 30, 16, 16));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 60, 16, 16));
        checkBox_suma = new QCheckBox(groupBox_3);
        checkBox_suma->setObjectName("checkBox_suma");
        checkBox_suma->setGeometry(QRect(30, 90, 83, 21));
        checkBox_resta = new QCheckBox(groupBox_3);
        checkBox_resta->setObjectName("checkBox_resta");
        checkBox_resta->setGeometry(QRect(140, 90, 83, 21));
        checkBox_multiplicacion = new QCheckBox(groupBox_3);
        checkBox_multiplicacion->setObjectName("checkBox_multiplicacion");
        checkBox_multiplicacion->setGeometry(QRect(30, 110, 111, 21));
        checkBox_division = new QCheckBox(groupBox_3);
        checkBox_division->setObjectName("checkBox_division");
        checkBox_division->setGeometry(QRect(140, 110, 83, 21));
        pushButton_calcular = new QPushButton(groupBox_3);
        pushButton_calcular->setObjectName("pushButton_calcular");
        pushButton_calcular->setGeometry(QRect(110, 140, 80, 23));
        listWidget_calcular = new QListWidget(groupBox_3);
        listWidget_calcular->setObjectName("listWidget_calcular");
        listWidget_calcular->setGeometry(QRect(20, 170, 261, 241));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Bienvenida", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ingrese su nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ingrese su edad:", nullptr));
        comboBox_ocupacion->setItemText(0, QCoreApplication::translate("MainWindow", "Seleccione su ocupacion:", nullptr));
        comboBox_ocupacion->setItemText(1, QCoreApplication::translate("MainWindow", "Abogado", nullptr));
        comboBox_ocupacion->setItemText(2, QCoreApplication::translate("MainWindow", "Medico", nullptr));
        comboBox_ocupacion->setItemText(3, QCoreApplication::translate("MainWindow", "Fisico", nullptr));
        comboBox_ocupacion->setItemText(4, QCoreApplication::translate("MainWindow", "Estudiante", nullptr));
        comboBox_ocupacion->setItemText(5, QCoreApplication::translate("MainWindow", "Otro", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Genero", nullptr));
        radioButton_masculino->setText(QCoreApplication::translate("MainWindow", "Masculino", nullptr));
        radioButton_femenino->setText(QCoreApplication::translate("MainWindow", "Femenino", nullptr));
        radioButton_otro->setText(QCoreApplication::translate("MainWindow", "Otro", nullptr));
        pushButton_saludo->setText(QCoreApplication::translate("MainWindow", "Saludo", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Calculadora", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        checkBox_suma->setText(QCoreApplication::translate("MainWindow", "Suma", nullptr));
        checkBox_resta->setText(QCoreApplication::translate("MainWindow", "Resta", nullptr));
        checkBox_multiplicacion->setText(QCoreApplication::translate("MainWindow", "Multiplicacion", nullptr));
        checkBox_division->setText(QCoreApplication::translate("MainWindow", "Division", nullptr));
        pushButton_calcular->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
