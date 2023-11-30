#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <stdio.h>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_saludo_clicked();

    void on_pushButton_calcular_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

class Sumar {
    public:
        int suma(int x, int y) {
            return x + y;
        }
        double suma(double x, double y) {
            return x + y;
        }
};

class Restar {
    public:
        int resta(int x, int y) {
            return x - y;
        }
        double resta(double x, double y) {
            return x - y;
        }
};

class Multiplicar {
    public:
        int producto(int x, int y) {
            return x*y;
        }
        double producto(double x, double y) {
            return x*y;
        }
};

class Dividir {
    public:
        int division(int x, int y) {
            return x/y;
        }
        double division(double x, double y) {
            return x/y;
        }
};
