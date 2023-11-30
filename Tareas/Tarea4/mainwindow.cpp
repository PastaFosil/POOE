#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>

#include <iostream>

int contador = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox_Masa1->setVisible(false);
    ui->groupBox_Masa2->setVisible(false);
    ui->groupBox_Distancia->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_Resultado_clicked()
{
    contador++;
    if (contador==2) {
        ui->listWidget->clear();
        contador = 1;
    }
    // ///////////////////////////
    double Msol, Mmercurio, Mvenus, Mtierra, Mmarte, Mjupiter, Msaturno, Murano, Mneptuno, M1, M2; // Masas en kg
    Msol = 1.989e30;
    Mmercurio = 3.302e23;
    Mvenus = 4.869e24;
    Mtierra = 5.972e24;
    Mmarte = 6.419e23;
    Mjupiter = 1.899e27;
    Msaturno = 5.685e26;
    Murano = 8.685e25;
    Mneptuno = 1.024e26;

    double Psol, Pmercurio, Pvenus, Ptierra, Pmarte, Pjupiter, Psaturno, Purano, Pneptuno, Dis1, Dis2; // Posiciones respecto al sol
    Psol = 0;
    Pmercurio = 57e6;
    Pvenus = 108e6;
    Ptierra = 150e6;
    Pmarte = 230e6;
    Pjupiter = 787e6;
    Psaturno = 1432e6;
    Purano = 2870e6;
    Pneptuno = 4500e6;

    Kepler objeto;
    if(ui->comboBox_P1->currentText() == "" || ui->comboBox_P1->currentIndex() == 0)
    {
        QMessageBox::critical(this,"Error", "Seleccione un cuerpo 1");
    }
    else if(ui->comboBox_P2->currentText() == "" || ui->comboBox_P2->currentIndex() == 0)
    {
        QMessageBox::critical(this,"Error", "Seleccione un cuerpo 2");
    }
    else
    {
        if(ui->comboBox_P1->currentText() == "Sol")
        {
            M1 = Msol;
            Dis1 = Psol;

        }
        else if(ui->comboBox_P1->currentText() == "Mercurio")
        {
            M1 = Mmercurio;
            Dis1 = Pmercurio;
        }
        else if(ui->comboBox_P1->currentText() == "Venus")
        {
            M1 = Mvenus;
            Dis1 = Pvenus;
        }
        else if(ui->comboBox_P1->currentText() == "Tierra")
        {
            M1 = Mtierra;
            Dis1 = Ptierra;
        }
        else if(ui->comboBox_P1->currentText() == "Marte")
        {
            M1 = Mmarte;
            Dis1 = Pmarte;
        }
        else if(ui->comboBox_P1->currentText() == "Jupiter")
        {
            M1 = Mjupiter;
            Dis1 = Pjupiter;
        }
        else if(ui->comboBox_P1->currentText() == "Saturno")
        {
            M1 = Msaturno;
            Dis1 = Psaturno;
        }
        else if(ui->comboBox_P1->currentText() == "Urano")
        {
            M1 = Murano;
            Dis1 = Purano;
        }
        else if(ui->comboBox_P1->currentText() == "Neptuno")
        {
            M1 = Mneptuno;
            Dis1 = Pneptuno;
        }
        else if(ui->comboBox_P1->currentText() == "Otro")
        {
            QString M = ui->MOtro1->text();
            if (M.isNull() || M.isEmpty()) {
                QMessageBox::critical(this,"Error", "Ingrese una masa valida para el primer cuerpo");
                ui->MOtro1->setFocus();
            }
            M1 = M.toDouble();
        }

        // /////////////////////////////////////////////////
        if(ui->comboBox_P2->currentText() == "Sol")
        {
            M2 = Msol;
            Dis2 = Psol;
        }
        else if(ui->comboBox_P2->currentText() == "Mercurio")
        {
            M2 = Mmercurio;
            Dis2 = Pmercurio;
        }
        else if(ui->comboBox_P2->currentText() == "Venus")
        {
            M2 = Mvenus;
            Dis2 = Pvenus;
        }
        else if(ui->comboBox_P2->currentText() == "Tierra")
        {
            M2 = Mtierra;
            Dis2 = Ptierra;
        }
        else if(ui->comboBox_P2->currentText() == "Marte")
        {
            M2 = Mmarte;
            Dis2 = Pmarte;
        }
        else if(ui->comboBox_P2->currentText() == "Jupiter")
        {
            M2 = Mjupiter;
            Dis2 = Pjupiter;
        }
        else if(ui->comboBox_P2->currentText() == "Saturno")
        {
            M2 = Msaturno;
            Dis2 = Psaturno;
        }
        else if(ui->comboBox_P2->currentText() == "Urano")
        {
            M2 = Murano;
            Dis2 = Purano;
        }
        else if(ui->comboBox_P2->currentText() == "Neptuno")
        {
            M2 = Mneptuno;
            Dis2 = Pneptuno;
        }
        else if(ui->comboBox_P2->currentText() == "Otro")
        {
            QString M = ui->MOtro_2->text();

            if (M.isNull() || M.isEmpty()) {
                QMessageBox::critical(this,"Error", "Ingrese una masa valida para el segundo cuerpo");
                ui->MOtro_2->setFocus();
            }
            M2 = M.toDouble();

        }
        // ///////////////////////////////
        if(ui->comboBox_P1->currentIndex() != 10 || ui->comboBox_P2->currentIndex() != 10)
        {
            double DistT = objeto.distancia(Dis1, Dis2);
            double resultado = objeto.periodo(M1, M2, DistT);
            ui->listWidget->addItem("El periodo de la orbita es:\n" + QString::fromStdString(to_string(resultado)) + " s.");
            double resultadoAnios = resultado/31690989.272932;
            ui->listWidget->addItem("\nEquivalente a:\n" + QString::fromStdString(to_string(resultadoAnios)) + " anios terrestres.");
        }
        else
        {
            QString dist = ui->lineEdit_Distancia->text();
            if (dist.isNull() || dist.isEmpty()) {
                QMessageBox::critical(this,"Error", "Ingrese una distancia valida");
                if (ui->MOtro1->text()=="") {
                    ui->MOtro1->setFocus();
                } else if (ui->MOtro_2->text()=="") {
                    ui->MOtro_2->setFocus();
                } else {
                    ui->lineEdit_Distancia->setFocus();
                }
            } else {
                double DistT = dist.toDouble();
                double resultado = objeto.periodo(M1, M2, DistT);
                ui->listWidget->addItem("El periodo de la orbita es de:\n" + QString::fromStdString(to_string(resultado)) + " s.");
                double resultadoAnios = resultado/31690989.272932;
                ui->listWidget->addItem("\nEquivalente a:\n" + QString::fromStdString(to_string(resultadoAnios)) + " anios terrestres.");
            }
        }

    }
}




void MainWindow::on_comboBox_P2_currentIndexChanged(int index)
{
    if (index==10)
    {
        ui->groupBox_Masa2->setEnabled(true);
        ui->groupBox_Masa2->setVisible(true);
        ui->groupBox_Distancia->setEnabled(true);
        ui->groupBox_Distancia->setVisible(true);
    }
    else if (index != 10)
    {
        ui->groupBox_Masa2->setEnabled(false);
        ui->groupBox_Masa2->setVisible(false);
        if (ui->comboBox_P1->currentIndex()!=10) {
            ui->groupBox_Distancia->setEnabled(false);
            ui->groupBox_Distancia->setVisible(false);
        }
    }

}


void MainWindow::on_comboBox_P1_currentIndexChanged(int index)
{
    if (index==10)
    {
        ui->groupBox_Masa1->setEnabled(true);
        ui->groupBox_Masa1->setVisible(true);
        ui->groupBox_Distancia->setEnabled(true);
        ui->groupBox_Distancia->setVisible(true);
    }
    else if (index != 10)
    {
        ui->groupBox_Masa1->setEnabled(false);
        ui->groupBox_Masa1->setVisible(false);
        if (ui->comboBox_P2->currentIndex()!=10) {
            ui->groupBox_Distancia->setEnabled(false);
            ui->groupBox_Distancia->setVisible(false);
        }
    }
}

