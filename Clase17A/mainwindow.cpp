#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox_ej1->setVisible(false);
    ui->groupBox_ej2->setVisible(false);
    ui->groupBox_ej3->setVisible(false);
    ui->groupBox_ej4->setVisible(false);
    ui->groupBox_ej5->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_calcular_clicked()
{
    ui->listWidget_result->clear();
    EjerciciosFisica objeto;


    if(!ui->checkBox_ej1->isChecked() && !ui->checkBox_ej2->isChecked() && !ui->checkBox->isChecked() && !ui->checkBox_ej4->isChecked() && !ui->checkBox_5->isChecked())
    {
        QMessageBox::critical(this, "Error", "Seleccione alguna opción, por favor.");
    }
    else
    {
        if(ui->checkBox_ej1->isChecked())
        {
            //Para el ejercicio 1
            QString tiempo1 = ui->lineEdit_time1->text();

            if(tiempo1.isEmpty() || tiempo1.isNull() || tiempo1.toDouble() == false)
            {
                QMessageBox::critical(this, "Error", "Entre un valor correcto para Tiempo1.");
                ui->lineEdit_time1->setFocus();
            }
            else
            {
                double result = objeto.caidaLibre(tiempo1.toDouble());
                ui->listWidget_result->addItem("Ejercicio 1");
                ui->listWidget_result->addItem("Distancia recorrida = " + QString::fromStdString(to_string(result)) + " m/s");
            }
        }

        if(ui->checkBox_ej2->isChecked())
        {
            //Para el ejercicio 2
            QString velocidad2 = ui->lineEdit_v2->text();
            QString tiempo2 = ui->lineEdit_t2->text();

            if(velocidad2.isEmpty() || velocidad2.isNull() || velocidad2.toDouble() == false)
            {
                QMessageBox::critical(this, "Error", "Entre un valor correcto para la Velocidad.");
                ui->lineEdit_v2->setFocus();
            }
            else if(tiempo2.isEmpty() || tiempo2.isNull() || tiempo2.toDouble() == false)
            {
                QMessageBox::critical(this, "Error", "Entre un valor correcto para el Tiempo 2.");
                ui->lineEdit_t2->setFocus();
            }
            else
            {
               double dist = objeto.lanzamientoHorizontal(velocidad2.toDouble(), tiempo2.toDouble());
               ui->listWidget_result->addItem("Ejercicio 2");
               ui->listWidget_result->addItem("Distancia del lanzamiento horizontal = " +
                                              QString::fromStdString(to_string(dist)) + " m");
            }
        }
        //Para resolver el ejercicio 3
       if(ui->checkBox->isChecked())
       {
           //Para el ejercicio 2
           QString masa3 = ui->lineEdit_masa3->text();
           QString velocidad3 = ui->lineEdit_velocidad3->text();

           if(masa3.isEmpty() || masa3.isNull() || masa3.toDouble() == false)
           {
               QMessageBox::critical(this, "Error", "Entre un valor correcto para la Masa.");
               ui->lineEdit_masa3->setFocus();
           }
           else if(velocidad3.isEmpty() || velocidad3.isNull() || velocidad3.toDouble() == false)
           {
               QMessageBox::critical(this, "Error", "Entre un valor correcto para Velocidad 3.");
               ui->lineEdit_velocidad3->setFocus();
           }
           else
           {
              double result3 = objeto.energiaCinetica(masa3.toDouble(), velocidad3.toDouble());
              ui->listWidget_result->addItem("Ejercicio 3");
              ui->listWidget_result->addItem("Energía Cinética = " +
                                             QString::fromStdString(to_string(result3)) + " J");
           }
       }

       //Para resolver el ejercicio 4
      if(ui->checkBox_ej4->isChecked())
      {
          QString resorte = ui->lineEdit_resorte->text();
          QString desplazamiento = ui->lineEdit_desplazamiento->text();

          if(resorte.isEmpty() || resorte.isNull() || resorte.toDouble() == false)
          {
              QMessageBox::critical(this, "Error", "Entre un valor correcto para Resorte.");
              ui->lineEdit_resorte->setFocus();
          }
          else if(desplazamiento.isEmpty() || desplazamiento.isNull() || desplazamiento.toDouble() == false)
          {
              QMessageBox::critical(this, "Error", "Entre un valor correcto para Desplazamiento.");
              ui->lineEdit_desplazamiento->setFocus();
          }
          else
          {
              ui->listWidget_result->addItem("Ejercicio 4");
              double tiempo = 0;
              const double intervalo = 1; // segundos
              while (tiempo <= 10) { // Simular por 10 segundos
                  double posicion = objeto.resorte(resorte.toDouble(),desplazamiento.toDouble(),tiempo);
                   ui->listWidget_result->addItem("Posición = " +
                                                      QString::fromStdString(to_string(posicion)) + " Tiempo"
                                                  + QString::fromStdString(to_string(tiempo)));
                  tiempo += intervalo;
              }
          }
      }

      //Para el ejercicio 5
      if(ui->checkBox_5->isChecked())
      {
          QString altura = ui->lineEdit_altura5->text();

          if(altura.isEmpty() || altura.isNull() || altura.toDouble() == false)
          {
              QMessageBox::critical(this, "Error", "Entre un valor correcto para la Altura.");
              ui->lineEdit_altura5->setFocus();
          }
          else
          {
              double result5 = objeto.caidaLibreCalc(altura.toDouble());
              ui->listWidget_result->addItem("Ejercicio 5");
              ui->listWidget_result->addItem("Distancia recorrida = "
                                             + QString::fromStdString(to_string(result5)) + " m");
          }
      }
    }
}

void MainWindow::on_checkBox_ej1_clicked(bool checked)
{
    if(checked == true)
    {
        ui->groupBox_ej1->setEnabled(true);
        ui->groupBox_ej1->setVisible(true);
    }
    else
    {
        ui->groupBox_ej1->setEnabled(false);
        ui->groupBox_ej1->setVisible(false);
    }
}

void MainWindow::on_checkBox_ej2_clicked(bool checked)
{
    if(checked == true)
    {
        ui->groupBox_ej2->setEnabled(true);
        ui->groupBox_ej2->setVisible(true);
    }
    else
    {
        ui->groupBox_ej2->setEnabled(false);
        ui->groupBox_ej2->setVisible(false);
    }
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked == true)
    {
        ui->groupBox_ej3->setEnabled(true);
        ui->groupBox_ej3->setVisible(true);
    }
    else
    {
        ui->groupBox_ej3->setEnabled(false);
        ui->groupBox_ej3->setVisible(false);
    }
}


void MainWindow::on_checkBox_ej4_clicked(bool checked)
{
    if(checked == true)
    {
        ui->groupBox_ej4->setEnabled(true);
        ui->groupBox_ej4->setVisible(true);
    }
    else
    {
        ui->groupBox_ej4->setEnabled(false);
        ui->groupBox_ej4->setVisible(false);
    }
}

void MainWindow::on_checkBox_5_clicked(bool checked)
{
    if(checked == true)
    {
        ui->groupBox_ej5->setEnabled(true);
        ui->groupBox_ej5->setVisible(true);
    }
    else
    {
        ui->groupBox_ej5->setEnabled(false);
        ui->groupBox_ej5->setVisible(false);
    }
}

void MainWindow::on_actionSalir_triggered()
{

}

void MainWindow::on_actionSub_men_triggered()
{
    QString filename = QFileDialog::getOpenFileName(
                   this,
                   tr("Seleccionar Patrón"),
                    "D://Maestria OPTO/CUATRIMESTRE V/acomodo_vf/acomodo/patrones/",
                   "Imagen (*.bmp | *.png | *.jpg | *.jpeg)"
                   );
    //ui->listWidget_result->addItem(filename);
}

void MainWindow::on_actionEjercicio_1_triggered()
{
     ui->groupBox_ej1->setEnabled(true);
     ui->checkBox_ej1->setChecked(true);
     ui->groupBox_ej1->setVisible(true);
}

void MainWindow::on_actionEjercicio_2_triggered()
{
    ui->groupBox_ej2->setEnabled(true);
    ui->checkBox_ej2->setChecked(true);
    ui->groupBox_ej2->setVisible(true);
}

void MainWindow::on_actionEjercicio_3_triggered()
{
    ui->groupBox_ej3->setEnabled(true);
    ui->checkBox->setChecked(true);
    ui->groupBox_ej3->setVisible(true);
}

void MainWindow::on_actionEjercicio_4_triggered()
{
    ui->groupBox_ej4->setEnabled(true);
    ui->checkBox_ej4->setChecked(true);
    ui->groupBox_ej4->setVisible(true);
}

void MainWindow::on_actionEjercicio_5_triggered()
{
    ui->groupBox_ej5->setEnabled(true);
    ui->checkBox_5->setChecked(true);
    ui->groupBox_ej5->setVisible(true);
}
