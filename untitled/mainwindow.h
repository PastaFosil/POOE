#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>

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
    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

class Sumar
{
    int sumar(int x, int y){
        return x+y;
    }
};
#endif // MAINWINDOW_H
