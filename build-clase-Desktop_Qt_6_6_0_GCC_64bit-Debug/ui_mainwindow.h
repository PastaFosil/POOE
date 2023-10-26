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
    QPushButton *pushButton_bienvenida;
    QListWidget *list_bienvenida;
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
        groupBox->setGeometry(QRect(10, 10, 311, 131));
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
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->setObjectName("comboBox_ocupacion");
        comboBox_ocupacion->setGeometry(QRect(20, 90, 181, 23));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 150, 311, 61));
        radioButton_masculino = new QRadioButton(groupBox_2);
        radioButton_masculino->setObjectName("radioButton_masculino");
        radioButton_masculino->setGeometry(QRect(10, 30, 100, 21));
        radioButton_femenino = new QRadioButton(groupBox_2);
        radioButton_femenino->setObjectName("radioButton_femenino");
        radioButton_femenino->setGeometry(QRect(100, 30, 100, 21));
        radioButton_otro = new QRadioButton(groupBox_2);
        radioButton_otro->setObjectName("radioButton_otro");
        radioButton_otro->setGeometry(QRect(190, 30, 100, 21));
        pushButton_bienvenida = new QPushButton(centralwidget);
        pushButton_bienvenida->setObjectName("pushButton_bienvenida");
        pushButton_bienvenida->setGeometry(QRect(110, 220, 80, 23));
        list_bienvenida = new QListWidget(centralwidget);
        list_bienvenida->setObjectName("list_bienvenida");
        list_bienvenida->setGeometry(QRect(10, 250, 311, 151));
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
        comboBox_ocupacion->setItemText(5, QCoreApplication::translate("MainWindow", "Ingeniero", nullptr));
        comboBox_ocupacion->setItemText(6, QCoreApplication::translate("MainWindow", "Otro", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Genero", nullptr));
        radioButton_masculino->setText(QCoreApplication::translate("MainWindow", "Masculino", nullptr));
        radioButton_femenino->setText(QCoreApplication::translate("MainWindow", "Femenino", nullptr));
        radioButton_otro->setText(QCoreApplication::translate("MainWindow", "Otro", nullptr));
        pushButton_bienvenida->setText(QCoreApplication::translate("MainWindow", "Saludo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
