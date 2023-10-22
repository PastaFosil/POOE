#include "mainwindow.h"
#include "ui_mainwindow.h"
int contador=0;
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
void MainWindow::on_bienvenir_clicked()
{
    ui->list_bienvenida->clear();
    QString nombre = ui->name->text();
    QString edad = ui->age->text();
    if(nombre.isEmpty() || nombre.isNull())
    {
        QMessageBox::critical(this, "ERROOOOOOOOR", "INTRODUCE TU NOMBREEEEEEE ÒnÓ");
        ui->name->setFocus();
    }
    else if(edad.isEmpty() || edad.isNull() || edad.toInt()==0)
    {
        QMessageBox::critical(this, "ERROOOOOOOOR", "INTRODUCE TU EDAAAAAAAAD ÒnÓ");
        ui->age->setFocus();
    }
    else if(ui->comboBox_ocupacion->currentIndex()==0 || ui->comboBox_ocupacion->currentText()=="")
    {
        QMessageBox::critical(this, "ERROOOOOOOOR", "Nini tambien es una opción JAJAJAJAJAJAJAJAJAJAJA pendejo JAJAJJAJAAJJA");
    }
    else if(!ui->radiomasculinio->isChecked() && !ui->radiofemeninio->isChecked() && !ui->radiogay->isChecked())
    {
        QMessageBox::critical(this, "ERROOOOOOOOR", "Seleccione su genero (gay JAJJAJDASJDSAJDJASJDJasdjdsajfjasdfjajsdfjasdfjasdjfjasdjfjsdjfjsdjjsdfjasjdfjsdfgsdJSKDFGSJKHDGF)");
    }
    else if(!ui->checkBox_sumar->isChecked() && !ui->checkBox_restar->isChecked())
    {
        QMessageBox::critical(this, "ERROOOOOOOOR", "SUMA O RESTAAAA que carai");
    }
    else
    {
        ui->list_bienvenida->addItem("ola, bienvenido :3 " + nombre);
        ui->list_bienvenida->addItem("tienes estos añooooooos???? :3: " + edad);
        ui->list_bienvenida->addItem("aqui dice que te dedicas a: " + ui->comboBox_ocupacion->currentText());
        if(ui->radiomasculinio->isChecked())
        {
            ui->list_bienvenida->addItem("de género: " + ui->radiofemeninio->text());
        }
        else if(ui->radiofemeninio->isChecked())
        {
            ui->list_bienvenida->addItem("de género: " + ui->radiomasculinio->text());
        }
        else if(ui->radiogay->isChecked())
        {
            ui->list_bienvenida->addItem("de género: " + ui->radiogay->text());
        }
        if(ui->checkBox_sumar->isChecked() && ui->checkBox_restar->isChecked())
        {
            ui->list_bienvenida->addItem("opcion: " + ui->checkBox_sumar->text() + ui->checkBox_restar->text());
        }
        if(ui->checkBox_sumar->isChecked() && !ui->checkBox_restar->isChecked())
        {
            ui->list_bienvenida->addItem("opcion: " + ui->checkBox_sumar->text());
        }
        if(!ui->checkBox_sumar->isChecked() && ui->checkBox_restar->isChecked())
        {
            ui->list_bienvenida->addItem("opcion: " + ui->checkBox_restar->text());
        }
    }
}
void MainWindow::on_calcular_clicked()
{
    if(contador==2)
    {
        ui->list_sumar->clear();
    }
    QString num1 = ui->numero1->text();
    QString num2 = ui->numero2->text();
    contador++;
    if(num1.isEmpty() || num1.isNull() || (num1.toInt() == false && num1.toDouble() == false))
    {
        QMessageBox::critical(this, "ERROOOOOOOOR", "kk");
        ui->numero1->setFocus();
    }
    if(num2.isEmpty() || num2.isNull() || (num1.toInt() == false && num1.toDouble() == false))
    {
        QMessageBox::critical(this, "ERROOOOOOOOR", "kkita");
        ui->numero2->setFocus();
    }
    if(!ui->checkBox_sumar->isChecked() && !ui->checkBox_restar->isChecked() && !ui->checkbox_multiplicar->isChecked() && !ui->checkbox_dividir->isChecked())
    {
        QMessageBox::critical(this, "ERROOOOOOOOR", "kkota");
    }
    if(ui->checkBox_sumar->isChecked())
    {
        ui->list_sumar->addItem("opcion: " + ui->checkBox_sumar->text());
        Sumar s;
        if(num1.toInt()>0 && num2.toInt()>0)
        {
            int t = s.suma(num1.toInt(), num2.toInt());
            ui->list_sumar->addItem("la suma es " + QString::fromStdString(to_string(t)));
        }
         else if(num1.toDouble()>0 && num2.toDouble()>0)
        {
            double ti = s.suma(num1.toDouble(), num2.toDouble());
            ui->list_sumar->addItem("la suma es " + QString::fromStdString(to_string(ti)));
        }
    }
    if(ui->checkBox_restar->isChecked())
    {
        ui->list_sumar->addItem("opcion: " + ui->checkBox_restar->text());
        Restar s;
        if(num1.toInt()>0 && num2.toInt()>0)
        {
            int t = s.resta(num1.toInt(), num2.toInt());
            ui->list_sumar->addItem("la resta es " + QString::fromStdString(to_string(t)));
        }
        else if(num1.toDouble()>0 && num2.toDouble()>0)
        {
            double ti = s.resta(num1.toDouble(), num2.toDouble());
            ui->list_sumar->addItem("la resta es " + QString::fromStdString(to_string(ti)));
        }
    }
    if(ui->checkbox_multiplicar->isChecked())
    {
        ui->list_sumar->addItem("opcion: " + ui->checkbox_multiplicar->text());
        Multiplicar s;
        if(num1.toInt()>0 && num2.toInt()>0)
        {
            int t = s.multiplica(num1.toInt(), num2.toInt());
            ui->list_sumar->addItem("la multiplicacion es " + QString::fromStdString(to_string(t)));
        }
        else if(num1.toDouble()>0 && num2.toDouble()>0)
        {
            double ti = s.multiplica(num1.toDouble(), num2.toDouble());
            ui->list_sumar->addItem("la multiplicacion es " + QString::fromStdString(to_string(ti)));
        }
    }
    if(ui->checkbox_dividir->isChecked())
    {
        ui->list_sumar->addItem("opcion: " + ui->checkbox_dividir->text());
        Dividir s;
        double ti = s.divide(num1.toDouble(), num2.toDouble());
        ui->list_sumar->addItem("la division es " + QString::fromStdString(to_string(ti)));
    }
}
