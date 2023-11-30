#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <cmath>
#include <QMessageBox>
#include <QFileDialog>
#include <string.h>
using namespace std;


#include <QMainWindow>

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

    void on_Resultado_clicked();

    void on_comboBox_P2_currentIndexChanged(int index);

    void on_comboBox_P1_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};

class Kepler
{
public:
    double periodo(double masa1, double masa2, double distancia)
    {
        distancia *= 1000;
        double ge = 6.67*pow(10,-11);
        double per = 2*M_PI*sqrt(pow(distancia,3)/((masa1+masa2)*ge));
        return per;
    }
    double distancia(float P1, float P2)
    {
        return abs(P1-P2);
    }
};
#endif // MAINWINDOW_H
