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
    QLineEdit *name;
    QLineEdit *age;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QListWidget *list_bienvenida;
    QComboBox *comboBox_ocupacion;
    QGroupBox *groupBox_2;
    QRadioButton *radioMasculino;
    QRadioButton *radioFemenino;
    QRadioButton *radioOtro;
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
        groupBox->setGeometry(QRect(20, 30, 381, 201));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setGeometry(QRect(130, 30, 113, 22));
        age = new QLineEdit(groupBox);
        age->setObjectName("age");
        age->setGeometry(QRect(130, 60, 113, 22));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 121, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 111, 16));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 90, 80, 23));
        list_bienvenida = new QListWidget(groupBox);
        list_bienvenida->setObjectName("list_bienvenida");
        list_bienvenida->setGeometry(QRect(20, 150, 256, 41));
        comboBox_ocupacion = new QComboBox(groupBox);
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->addItem(QString());
        comboBox_ocupacion->setObjectName("comboBox_ocupacion");
        comboBox_ocupacion->setGeometry(QRect(20, 120, 221, 23));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 240, 151, 101));
        radioMasculino = new QRadioButton(groupBox_2);
        radioMasculino->setObjectName("radioMasculino");
        radioMasculino->setGeometry(QRect(10, 30, 100, 21));
        radioFemenino = new QRadioButton(groupBox_2);
        radioFemenino->setObjectName("radioFemenino");
        radioFemenino->setGeometry(QRect(10, 50, 100, 21));
        radioOtro = new QRadioButton(groupBox_2);
        radioOtro->setObjectName("radioOtro");
        radioOtro->setGeometry(QRect(10, 70, 100, 21));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Bienvenido", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Ingrese su nombre:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Ingrese su edad:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Saludar", nullptr));
        comboBox_ocupacion->setItemText(0, QCoreApplication::translate("MainWindow", "Seleccione su ocupacion:", nullptr));
        comboBox_ocupacion->setItemText(1, QCoreApplication::translate("MainWindow", "Abogado", nullptr));
        comboBox_ocupacion->setItemText(2, QCoreApplication::translate("MainWindow", "Fisico", nullptr));
        comboBox_ocupacion->setItemText(3, QCoreApplication::translate("MainWindow", "Medico", nullptr));
        comboBox_ocupacion->setItemText(4, QCoreApplication::translate("MainWindow", "Ingeniero", nullptr));
        comboBox_ocupacion->setItemText(5, QCoreApplication::translate("MainWindow", "Otro", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Genero", nullptr));
        radioMasculino->setText(QCoreApplication::translate("MainWindow", "Masculino", nullptr));
        radioFemenino->setText(QCoreApplication::translate("MainWindow", "Femenino", nullptr));
        radioOtro->setText(QCoreApplication::translate("MainWindow", "Otro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
