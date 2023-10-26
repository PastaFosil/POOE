#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QInputDialog>
#include <QComboBox>


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


void MainWindow::on_pushButton_bienvenida_clicked()
{
    ui->list_bienvenida->clear();

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
    } else if ((!ui->radioButton_masculino->isChecked() && !ui->radioButton_femenino->isChecked()) || (!ui->radioButton_masculino->isChecked() && !ui->radioButton_otro->isChecked()) || (!ui->radioButton_femenino->isChecked() && !ui->radioButton_otro->isChecked())) {
        QMessageBox::critical(this, "ERROR", "No selecciono un genero valido");
    } else {
        ui->list_bienvenida->addItem("Hola, " + nombre);
        ui->list_bienvenida->addItem("Tu edad es: " + edad + " anios");
        ui->list_bienvenida->addItem("Tu ocupacion es: " + ui->comboBox_ocupacion->currentText());
    }
}

