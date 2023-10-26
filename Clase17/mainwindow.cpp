#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <cmath>

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

void MainWindow::on_checkBox_e1_clicked(bool checked)
{
    if (checked == true) {
        ui->groupBox_e1->setEnabled(true);
    } else {
        ui->groupBox_e1->setEnabled(false);
    }
}

void MainWindow::on_checkBox_e2_clicked(bool checked)
{
    if (checked == true) {
        ui->groupBox_e2->setEnabled(true);
    } else {
        ui->groupBox_e2->setEnabled(false);
    }
}

void MainWindow::on_checkBox_e3_clicked(bool checked)
{
    if (checked == true) {
        ui->groupBox_e3->setEnabled(true);
    } else {
        ui->groupBox_e3->setEnabled(false);
    }
}


void MainWindow::on_checkBox_e4_clicked(bool checked)
{
    if (checked == true) {
        ui->groupBox_e4->setEnabled(true);
    } else {
        ui->groupBox_e4->setEnabled(false);
    }
}


void MainWindow::on_checkBox_e5_clicked(bool checked)
{
    if (checked == true) {
        ui->groupBox_e5->setEnabled(true);
    } else {
        ui->groupBox_e5->setEnabled(false);
    }
}


void MainWindow::on_pushButton_calcular_clicked()
{
    contador++;
    if (contador==2) {
        ui->listWidget_resultados->clear();
        contador = 1;
    }

    if (!ui->checkBox_e1->isChecked() && !ui->checkBox_e2->isChecked() && !ui->checkBox_e3->isChecked() && !ui->checkBox_e4->isChecked() && !ui->checkBox_e5->isChecked()) {
        QMessageBox::critical(this, "ERROR", "Seleccione alguna de las opciones");
    } else {
        // EJERCICIO 1
        if (ui->checkBox_e1->isChecked()) {
            QString tiempo1=ui->lineEdit_t1->text();

            if (tiempo1.isEmpty() || tiempo1.isNull() || tiempo1.toDouble()==false) {
                QMessageBox::critical(this, "ERROR", "Ingrese un tiempo valido.");
                ui->lineEdit_t1->setFocus();
            } else {
                EjerciciosFisica objeto;
                double r1 = objeto.caidaLibre(tiempo1.toDouble());

                ui->listWidget_resultados->addItem("Ejercicio 1:");
                ui->listWidget_resultados->addItem("Distancia recorrida = " + QString::fromStdString(std::to_string(r1)) + " m");
            }
        }

        // EJERCICIO 2
        if (ui->checkBox_e2->isChecked()) {
            QString vel2=ui->lineEdit_v2->text();
            QString tiempo2=ui->lineEdit_t2->text();

            if (vel2.isEmpty() || vel2.isNull() || vel2.toDouble()==false) {
                QMessageBox::critical(this, "ERROR", "Ingrese una velocidad valida.");
                ui->lineEdit_v2->setFocus();
            } else if (tiempo2.isEmpty() || tiempo2.isNull() || tiempo2.toDouble()==false) {
                QMessageBox::critical(this, "ERROR", "Ingrese un tiempo valido.");
                ui->lineEdit_t2->setFocus();
            } else {
                EjerciciosFisica objeto;
                double r2 = objeto.lanzamientoHorizontal(vel2.toDouble(), tiempo2.toDouble());

                ui->listWidget_resultados->addItem("Ejercicio 2:");
                ui->listWidget_resultados->addItem("Alcance horizontal = " + QString::fromStdString(std::to_string(r2)) + " m");
            }
        }

        // EJERCICIO 3
        if (ui->checkBox_e3->isChecked()) {
            QString masa3=ui->lineEdit_t1->text();
            QString vel3=ui->lineEdit_v2->text();

            if (masa3.isEmpty() || masa3.isNull() || masa3.toDouble()==false) {
                QMessageBox::critical(this, "ERROR", "Ingrese una masa valida.");
                ui->lineEdit_m3->setFocus();
            } else if (vel3.isEmpty() || vel3.isNull() || vel3.toDouble()==false) {
                QMessageBox::critical(this, "ERROR", "Ingrese una velocidad valida.");
                ui->lineEdit_v3->setFocus();
            } else {
                EjerciciosFisica objeto;
                double r3 = objeto.energiaCinetica(masa3.toDouble(), vel3.toDouble());

                ui->listWidget_resultados->addItem("Ejercicio 3:");
                ui->listWidget_resultados->addItem("Energia cinetica = " + QString::fromStdString(std::to_string(r3)) + " m");
            }
        }

        // EJERCICIO 4
        if (ui->checkBox_e4->isChecked()) {
            QString cteResorte=ui->lineEdit_k4->text();
            QString x0=ui->lineEdit_x4->text();

            if (cteResorte.isEmpty() || cteResorte.isNull() || cteResorte.toDouble()==false) {
                QMessageBox::critical(this, "ERROR", "Ingrese una constante de resorte valida.");
                ui->lineEdit_k4->setFocus();
            } else if (x0.isEmpty() || x0.isNull() || x0.toDouble()==false) {
                QMessageBox::critical(this, "ERROR", "Ingrese un desplazamiento inicial valido.");
                ui->lineEdit_x4->setFocus();
            } else {
                ui->listWidget_resultados->addItem("Ejercicio 4:");
                EjerciciosFisica objeto;
                double tiempo = 0;
                const double intervalo = 0.1; // segundos
                while (tiempo <= 10) { // Simular por 10 segundos
                    double posicion = objeto.resorte(cteResorte.toDouble(), x0.toDouble(), tiempo);
                    ui->listWidget_resultados->addItem("Posicion = " + QString::fromStdString(std::to_string(posicion)) + " m. Tiempo  = " + QString::fromStdString(std::to_string(tiempo)) + " s");
                    tiempo += intervalo;
                }
            }
        }

        // EJERCICIO 5
        if (ui->checkBox_e5->isChecked()) {
            QString altura5=ui->lineEdit_h5->text();

            if (altura5.isEmpty() || altura5.isNull() || altura5.toDouble()==false) {
                QMessageBox::critical(this, "ERROR", "Ingrese una altura valida.");
                ui->lineEdit_t1->setFocus();
            } else {
                EjerciciosFisica objeto;
                double r5 = objeto.caidaLibreCalc(altura5.toDouble());

                ui->listWidget_resultados->addItem("Ejercicio 5:");
                ui->listWidget_resultados->addItem("Tiempo de caida = " + QString::fromStdString(std::to_string(r5)) + " m");
            }
        }
    }
}

