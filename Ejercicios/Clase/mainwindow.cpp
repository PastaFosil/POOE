#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QInputDialog>
#include <QComboBox>

int contador = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_saludo_clicked()
{
    ui->listWidget_bienvenida->clear();

    // Leer list text
    QString nombre = ui->name->text();
    QString edad = ui->age->text();

    if (nombre.isEmpty() || nombre.isNull()) {
        QMessageBox::critical(this, "ERROR", "No introdujo un nombre valido");
        ui->name->setFocus();
    } else if (edad.isEmpty() || edad.isNull() || edad.toInt()==0) {
        QMessageBox::critical(this, "ERROR", "No introdujo una edad valida");
        ui->age->setFocus();
    } else if (ui->comboBox_ocupacion->currentIndex()==0 || ui->comboBox_ocupacion->currentText()=="") {
        QMessageBox::critical(this, "ERROR", "No selecciono una ocupacion valida");
    } else if (!ui->radioButton_masculino->isChecked() && !ui->radioButton_femenino->isChecked() && !ui->radioButton_otro->isChecked()) {
        QMessageBox::critical(this, "ERROR", "No selecciono un genero valido");
    } else {
        ui->listWidget_bienvenida->addItem("Hola, " + nombre);
        ui->listWidget_bienvenida->addItem("Tu edad es: " + edad + " anios");
        ui->listWidget_bienvenida->addItem("Tu ocupacion es: " + ui->comboBox_ocupacion->currentText());
        if (ui->radioButton_masculino->isChecked()) {
            ui->listWidget_bienvenida->addItem("Tu genero es " + ui->radioButton_masculino->text());
        } else if (ui->radioButton_femenino->isChecked()) {
            ui->listWidget_bienvenida->addItem("Tu genero es " + ui->radioButton_femenino->text());
        } else {
            ui->listWidget_bienvenida->addItem("Tu genero es " + ui->radioButton_otro->text());
        }
    }
}


void MainWindow::on_pushButton_calcular_clicked()
{
    contador++;
    if (contador==2) {
        ui->listWidget_calcular->clear();
        contador = 1;
    }

    QString num1 = ui->x->text();
    QString num2 = ui->y->text();

    if (num1.isEmpty() || num1.isNull() || (num1.toInt()==false && num1.toDouble()==false)) {
        QMessageBox::critical(this, "ERROR", "x no es un numero valido");
        ui->x->setFocus();
    } else if (num2.isEmpty() || num2.isNull() || (num2.toInt()==false && num2.toDouble()==false)) {
        QMessageBox::critical(this, "ERROR", "y no es un numero valido");
        ui->y->setFocus();
    }

    if (!ui->checkBox_suma->isChecked() && !ui->checkBox_resta->isChecked() && !ui->checkBox_multiplicacion->isChecked() && !ui->checkBox_division->isChecked()) {
        QMessageBox::critical(this, "ERROR", "No ha seleccionado ninguna operacion");
    } else {
        if (ui->checkBox_suma->isChecked()) {
            Sumar op;
            if (num1.toInt()>0 && num2.toInt()>0) {
                int r = op.suma(num1.toInt(), num2.toInt());
                ui->listWidget_calcular->addItem("Suma = " + QString::fromStdString(std::to_string(r)));
            } else if (num1.toDouble()>0 && num2.toDouble()>0) {
                double r = op.suma(num1.toDouble(), num2.toDouble());
                ui->listWidget_calcular->addItem("Suma = " + QString::fromStdString(std::to_string(r)));
            }
        }
        if (ui->checkBox_resta->isChecked()) {
            Restar op;
            if (num1.toInt()>0 && num2.toInt()>0) {
                int r = op.resta(num1.toInt(), num2.toInt());
                ui->listWidget_calcular->addItem("Resta = " + QString::fromStdString(std::to_string(r)));
            } else if (num1.toDouble()>0 && num2.toDouble()>0) {
                double r = op.resta(num1.toDouble(), num2.toDouble());
                ui->listWidget_calcular->addItem("Resta = " + QString::fromStdString(std::to_string(r)));
            }
        }
        if (ui->checkBox_multiplicacion->isChecked()) {
            Multiplicar op;
            if (num1.toInt()>0 && num2.toInt()>0) {
                int r = op.producto(num1.toInt(), num2.toInt());
                ui->listWidget_calcular->addItem("Producto = " + QString::fromStdString(std::to_string(r)));
            } else if (num1.toDouble()>0 && num2.toDouble()>0) {
                double r = op.producto(num1.toDouble(), num2.toDouble());
                ui->listWidget_calcular->addItem("Producto = " + QString::fromStdString(std::to_string(r)));
            }
        }
        if (ui->checkBox_division->isChecked()) {
            Dividir op;
            if (num1.toInt()>0 && num2.toInt()>0) {
                int r = op.division(num1.toInt(), num2.toInt());
                ui->listWidget_calcular->addItem("Division = " + QString::fromStdString(std::to_string(r)));
            } else if (num1.toDouble()>0 && num2.toDouble()>0) {
                double r = op.division(num1.toDouble(), num2.toDouble());
                ui->listWidget_calcular->addItem("Division = " + QString::fromStdString(std::to_string(r)));
            }
        }
    }
}

