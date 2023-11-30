#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <string>

string ANS;
int counter = 0;

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


void MainWindow::on_pb11_clicked()
{
    ui->pb31->setText("divQ");
    ui->pb32->setText("qbrt");
    ui->pb34->setText("nthrt");
    ui->pb35->setText("10^");
    ui->pb36->setText("e^");
    ui->pb43->setText("x!");
    ui->pb44->setText("sen⁻1");
    ui->pb45->setText("cos⁻1");
    ui->pb46->setText("tan⁻1");
    ui->pb92->setText("Ran");
    ui->pb93->setText("pi");
}


void MainWindow::on_pb12_clicked()
{
    ui->pb41->setText("A");
    ui->pb42->setText("B");
    ui->pb43->setText("C");
    ui->pb44->setText("D");
    ui->pb45->setText("E");
    ui->pb46->setText("F");
    ui->pb55->setText("X");
    ui->pb56->setText("Y");
    ui->pb64->setText("undo");
    ui->pb92->setText("rnint");
    ui->pb93->setText("e");
    ui->pb94->setText("");
    ui->pb95->setText("");
}


void MainWindow::on_pb13_clicked()
{
    ui->pb21->setText("pi");
    ui->pb22->setText("x³");
    ui->pb25->setText("abs");
    ui->pb26->setText("lgb");
    ui->pb31->setText("div");
    ui->pb32->setText("sqrt");
    ui->pb33->setText("x²");
    ui->pb34->setText("x^");
    ui->pb35->setText("log");
    ui->pb36->setText("lgn");
    ui->pb41->setText("");
    ui->pb42->setText("");
    ui->pb43->setText("x⁻1");
    ui->pb44->setText("sen");
    ui->pb45->setText("cos");
    ui->pb46->setText("tan");
    ui->pb51->setText("");
    ui->pb52->setText("");
    ui->pb55->setText("s<>d");
    ui->pb56->setText("");
    ui->pb61->setText("7");
    ui->pb62->setText("8");
    ui->pb63->setText("9");
    ui->pb64->setText("del");
    ui->pb65->setText("ac");
    ui->pb71->setText("4");
    ui->pb72->setText("5");
    ui->pb73->setText("6");
    ui->pb74->setText("x");
    ui->pb75->setText("/");
    ui->pb81->setText("1");
    ui->pb82->setText("2");
    ui->pb83->setText("3");
    ui->pb84->setText("+");
    ui->pb85->setText("-");
    ui->pb91->setText("0");
    ui->pb92->setText(".");
    ui->pb93->setText("x10^");
    ui->pb94->setText("ans");
    ui->pb95->setText("=");
}
void MainWindow::on_pb15_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn + "abs(");
}
void MainWindow::on_pb16_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn + "lgb(");
}


void MainWindow::on_pb21_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn + "3.14159");
}
void MainWindow::on_pb22_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn + "^3");

}
void MainWindow::on_pb25_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"abs(");
}
void MainWindow::on_pb26_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"lgb(");
}



void MainWindow::on_pb31_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText("NaN");
}
void MainWindow::on_pb32_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"^(1/2)");
}
void MainWindow::on_pb33_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"^2");
}
void MainWindow::on_pb34_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"^");
}
void MainWindow::on_pb35_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"log(");
}
void MainWindow::on_pb36_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"lgn(");
}




void MainWindow::on_pb41_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"(");
}
void MainWindow::on_pb42_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+")");
}
void MainWindow::on_pb43_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"^(-1)");
}
void MainWindow::on_pb44_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"sin(");
}
void MainWindow::on_pb45_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"cos(");
}
void MainWindow::on_pb46_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"tan(");
}



void MainWindow::on_pb51_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"!");
}
void MainWindow::on_pb52_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"exp(");
}
void MainWindow::on_pb53_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"10^");
}
void MainWindow::on_pb54_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"asn(");
}
void MainWindow::on_pb55_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"acs(");
}
void MainWindow::on_pb56_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"atn(");
}




void MainWindow::on_pb61_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"7");
}
void MainWindow::on_pb62_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"8");
}
void MainWindow::on_pb63_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"9");
}
void MainWindow::on_pb64_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    string str = strn.toStdString();
    str = str.substr(0,str.length()-1);
    ui->display->setText(QString::fromStdString(str));
}
void MainWindow::on_pb65_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    ui->display->setText("");
}




void MainWindow::on_pb71_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"4");
}
void MainWindow::on_pb72_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"5");
}
void MainWindow::on_pb73_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"6");
}
void MainWindow::on_pb74_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"*");
}
void MainWindow::on_pb75_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"/");
}




void MainWindow::on_pb81_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"1");
}
void MainWindow::on_pb82_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"2");
}
void MainWindow::on_pb83_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"3");
}
void MainWindow::on_pb84_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn + "+");
}
void MainWindow::on_pb85_clicked()
{
    if (counter > 0) {
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+"-");
}




void MainWindow::on_pb91_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn + "0");
}
void MainWindow::on_pb92_clicked()
{
    QString strn = ui->display->text();
    ui->display->setText(strn+".");
}
void MainWindow::on_pb93_clicked()
{
    QString strn = ui->display->text();
    ui->display->setText(strn+"*10^(");
}
void MainWindow::on_pb94_clicked()
{
    if (counter > 0) {
        ui->display->setText("");
        counter = 0;
    }
    QString strn = ui->display->text();
    ui->display->setText(strn+QString::fromStdString(ANS));
}
void MainWindow::on_pb95_clicked()
{
    counter += 1;

    Calculadora calc;
    QString strn = ui->display->text();
    string input = strn.toStdString();
    string result = calc.calcularExpresion(input);
    ui->display->setText(QString::fromStdString(result));

    ANS = result;
}

