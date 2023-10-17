#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{

}

void MainWindow::on_pushButton_clicked()
{
    //Para leer lo que esta en el linetext
    QString nombre = ui->name->text();
    QString edad = ui->age->text();

     //Para checar que mi texto no sea vacío o nulo
    if(nombre.isEmpty() || nombre.isNull())
    {
        QMessageBox::critical(this, "Error", "Entre su nombre.");
        ui->name->setFocus();
    }
    else if(edad.isEmpty() || edad.isNull() || edad.toInt()==0)
    {
        QMessageBox::critical(this, "Error", "Entre una edad correcta.");
        ui->age->setFocus();
    }
    else
    {
        ui->list_bienvenida->addItem("Bienvenido " + nombre);
        ui->list_bienvenida->addItem("Edad: " + edad);
    }

}
