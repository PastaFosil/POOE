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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label_2;
    QComboBox *comboBox_P1;
    QLabel *label;
    QLabel *label_3;
    QComboBox *comboBox_P2;
    QLabel *label_4;
    QPushButton *Resultado;
    QListWidget *listWidget;
    QGroupBox *groupBox_Masa1;
    QLineEdit *MOtro1;
    QLabel *label_5;
    QGroupBox *groupBox_Masa2;
    QLabel *label_6;
    QLineEdit *MOtro_2;
    QGroupBox *groupBox_Distancia;
    QLineEdit *lineEdit_Distancia;
    QLabel *label_7;
    QGroupBox *groupBox;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(550, 499);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 0, 541, 511));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 80, 71, 21));
        comboBox_P1 = new QComboBox(widget);
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->addItem(QString());
        comboBox_P1->setObjectName("comboBox_P1");
        comboBox_P1->setGeometry(QRect(30, 100, 79, 26));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 381, 51));
        QFont font;
        font.setPointSize(23);
        font.setBold(true);
        label->setFont(font);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 80, 71, 21));
        comboBox_P2 = new QComboBox(widget);
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->addItem(QString());
        comboBox_P2->setObjectName("comboBox_P2");
        comboBox_P2->setGeometry(QRect(160, 100, 79, 26));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 160, 121, 18));
        Resultado = new QPushButton(widget);
        Resultado->setObjectName("Resultado");
        Resultado->setGeometry(QRect(340, 110, 101, 31));
        QFont font1;
        font1.setPointSize(17);
        Resultado->setFont(font1);
        listWidget = new QListWidget(widget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(290, 190, 221, 171));
        groupBox_Masa1 = new QGroupBox(widget);
        groupBox_Masa1->setObjectName("groupBox_Masa1");
        groupBox_Masa1->setEnabled(false);
        groupBox_Masa1->setGeometry(QRect(20, 130, 221, 101));
        MOtro1 = new QLineEdit(groupBox_Masa1);
        MOtro1->setObjectName("MOtro1");
        MOtro1->setGeometry(QRect(20, 60, 181, 26));
        label_5 = new QLabel(groupBox_Masa1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 20, 191, 31));
        groupBox_Masa2 = new QGroupBox(widget);
        groupBox_Masa2->setObjectName("groupBox_Masa2");
        groupBox_Masa2->setEnabled(false);
        groupBox_Masa2->setGeometry(QRect(20, 240, 221, 101));
        label_6 = new QLabel(groupBox_Masa2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 20, 191, 31));
        MOtro_2 = new QLineEdit(groupBox_Masa2);
        MOtro_2->setObjectName("MOtro_2");
        MOtro_2->setGeometry(QRect(20, 60, 191, 26));
        groupBox_Distancia = new QGroupBox(widget);
        groupBox_Distancia->setObjectName("groupBox_Distancia");
        groupBox_Distancia->setEnabled(false);
        groupBox_Distancia->setGeometry(QRect(20, 350, 221, 101));
        lineEdit_Distancia = new QLineEdit(groupBox_Distancia);
        lineEdit_Distancia->setObjectName("lineEdit_Distancia");
        lineEdit_Distancia->setGeometry(QRect(20, 60, 191, 26));
        label_7 = new QLabel(groupBox_Distancia);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 20, 201, 31));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(290, 370, 221, 71));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 10, 171, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 20));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Cuerpo 1", nullptr));
        comboBox_P1->setItemText(0, QCoreApplication::translate("MainWindow", "Seleccione un cuerpo:", nullptr));
        comboBox_P1->setItemText(1, QCoreApplication::translate("MainWindow", "Sol", nullptr));
        comboBox_P1->setItemText(2, QCoreApplication::translate("MainWindow", "Mercurio", nullptr));
        comboBox_P1->setItemText(3, QCoreApplication::translate("MainWindow", "Venus", nullptr));
        comboBox_P1->setItemText(4, QCoreApplication::translate("MainWindow", "Tierra", nullptr));
        comboBox_P1->setItemText(5, QCoreApplication::translate("MainWindow", "Marte", nullptr));
        comboBox_P1->setItemText(6, QCoreApplication::translate("MainWindow", "Jupiter", nullptr));
        comboBox_P1->setItemText(7, QCoreApplication::translate("MainWindow", "Saturno", nullptr));
        comboBox_P1->setItemText(8, QCoreApplication::translate("MainWindow", "Urano", nullptr));
        comboBox_P1->setItemText(9, QCoreApplication::translate("MainWindow", "Neptuno", nullptr));
        comboBox_P1->setItemText(10, QCoreApplication::translate("MainWindow", "Otro", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Calculo \303\263rbital con kepler", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Cuerpo 2", nullptr));
        comboBox_P2->setItemText(0, QCoreApplication::translate("MainWindow", "Seleccione un cuerpo:", nullptr));
        comboBox_P2->setItemText(1, QCoreApplication::translate("MainWindow", "Sol", nullptr));
        comboBox_P2->setItemText(2, QCoreApplication::translate("MainWindow", "Mercurio", nullptr));
        comboBox_P2->setItemText(3, QCoreApplication::translate("MainWindow", "Venus", nullptr));
        comboBox_P2->setItemText(4, QCoreApplication::translate("MainWindow", "Tierra", nullptr));
        comboBox_P2->setItemText(5, QCoreApplication::translate("MainWindow", "Marte", nullptr));
        comboBox_P2->setItemText(6, QCoreApplication::translate("MainWindow", "Jupiter", nullptr));
        comboBox_P2->setItemText(7, QCoreApplication::translate("MainWindow", "Saturno", nullptr));
        comboBox_P2->setItemText(8, QCoreApplication::translate("MainWindow", "Urano", nullptr));
        comboBox_P2->setItemText(9, QCoreApplication::translate("MainWindow", "Neptuno", nullptr));
        comboBox_P2->setItemText(10, QCoreApplication::translate("MainWindow", "Otro", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "El periodo es de:", nullptr));
        Resultado->setText(QCoreApplication::translate("MainWindow", "Calcular", nullptr));
        groupBox_Masa1->setTitle(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Ingrese la masa del \n"
"cuerpo celeste (kg)", nullptr));
        groupBox_Masa2->setTitle(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Ingrese la masa del segundo \n"
"cuerpo celeste (kg)", nullptr));
        groupBox_Distancia->setTitle(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Ingrese la distancia \n"
"entre los cuerpos (km)", nullptr));
        groupBox->setTitle(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Puede expresar la notacion \n"
"cientifica como XeY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
