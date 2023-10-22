#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QInputDialog>
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //Para leer lo que esta en el linetext
    QString nombre = ui->name->text();
    QString edad = ui->age->text();

    //Para checar si el texto no esta vacio o nulo
    if (nombre.isEmpty() || nombre.isNull()){
        QMessageBox::critical(this, "Error", "Ingrese su nombre.");
    } else if (edad.isEmpty() || edad.isNull() || edad.toInt()==0){
        QMessageBox::critical(this, "Error", "Ingrese una edad valida");
    } else if (ui->comboBox_ocupacion->currentIndex()==0 || ui->comboBox_ocupacion->currentText()=="") {
        QMessageBox::critical(this, "Error", "No has seleccionado ninguna opcion");
    } else {
        ui->list_bienvenida->addItem("Bienvenido " + nombre);
        ui->list_bienvenida->addItem("Tu edad es: " + edad + " anios");
        ui->list_bienvenida->addItem("Tu ocupacion es: " + ui->comboBox_ocupacion->currentText());
    }
}
