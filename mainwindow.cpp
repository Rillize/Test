#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QString>
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
void MainWindow::on_Digit1_clicked()//1
{
    QString Y;
    Calc.push_digit(1);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}

void MainWindow::on_Digit2_clicked()//2
{
    QString Y;
    Calc.push_digit(2);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}

void MainWindow::on_Digit3_clicked()//3
{
    QString Y;
    Calc.push_digit(3);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}

void MainWindow::on_Digit4_clicked()//4
{
    QString Y;
    Calc.push_digit(4);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}


void MainWindow::on_Digit5_clicked()//5
{
    QString Y;
    Calc.push_digit(5);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}

void MainWindow::on_Digit6_clicked()//5
{
    QString Y;
    Calc.push_digit(6);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}
void MainWindow::on_Digit7_clicked()//7
{
    QString Y;
    Calc.push_digit(7);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}


void MainWindow::on_Digit8_clicked()//8
{
    QString Y;
    Calc.push_digit(8);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}


void MainWindow::on_Digit9_clicked()//9
{
    QString Y;
    Calc.push_digit(9);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}

void MainWindow::on_Digit0_clicked()//0
{
    QString Y;
    Calc.push_digit(0);
    Y.setNum (Calc.Calculate(),'g', Calc.n);
    ui->lcdNumber->display(Y);
}

void MainWindow::on_summ_clicked()//сложение
{
    Calc.push_plus();
}

void MainWindow::on_minus_clicked()//вычитание
{
    Calc.push_minus();
}

void MainWindow::on_multiplication_clicked()//умножение
{
    Calc.push_multiplication();
}

void MainWindow::on_division_clicked()//деление
{
    Calc.push_division();
}

void MainWindow::on_result_clicked()//равно
{
        Calc.resultFunc();
        QString Y;
        Y.setNum (Calc.resultFunc(),'g', Calc.n);
        ui->lcdNumber->display(Y);
        Calc.clear();
}

void MainWindow::on_clear_clicked()
{
    Calc.clear();
    ui->lcdNumber->display(0);
}

void MainWindow::on_comma_clicked()
{
    Calc.push_comma();
}



