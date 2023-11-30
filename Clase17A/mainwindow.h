#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <iostream>
#include <cmath>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_calcular_clicked();

    void on_checkBox_ej1_clicked(bool checked);

    void on_checkBox_ej2_clicked(bool checked);

    void on_checkBox_clicked(bool checked);

    void on_checkBox_ej4_clicked(bool checked);

    void on_checkBox_5_clicked(bool checked);

    void on_actionSalir_triggered();

    void on_actionSub_men_triggered();

    void on_actionEjercicio_1_triggered();

    void on_actionEjercicio_2_triggered();

    void on_actionEjercicio_3_triggered();

    void on_actionEjercicio_4_triggered();

    void on_actionEjercicio_5_triggered();

private:
    Ui::MainWindow *ui;
};


class EjerciciosFisica {
public:
    // Ejercicio 1: Cálculo de distancia recorrida en el tiempo
    double caidaLibre(double tiempo) {
        const double gravedad = 9.81; // m/s^2
        return 0.5 * gravedad * pow(tiempo, 2);
    }

    // Ejercicio 2: Calculadora de lanzamiento horizontal
    double lanzamientoHorizontal(double velocidad, double tiempo) {
        return velocidad * tiempo;
    }

    // Ejercicio 3: Calculadora de energía cinética
    double energiaCinetica(double masa, double velocidad) {
        return 0.5 * masa * pow(velocidad, 2);
    }

    // Ejercicio 4: Simulación de movimiento en un resorte
    double resorte(double constanteResorte, double desplazamientoInicial, double tiempo) {

        double posicion = desplazamientoInicial * cos(sqrt(constanteResorte) * tiempo);

        return posicion;
    }

    // Ejercicio 5: Calculadora de caída libre
    double caidaLibreCalc(double alturaInicial) {
        double tiempo = sqrt((2 * alturaInicial) / 9.81);
        return tiempo;
    }
};

#endif // MAINWINDOW_H
