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
float result1=0;
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_Digit1_clicked()//1
{
    Calc.push_digit("1");
    result1=std::stof(Calc.check());
    QString Y;
    Y.setNum (result1,'g', Calc.degree());
    ui->lcdNumber->display(Y);
}

void MainWindow::on_Digit2_clicked()//2
{

    Calc.push_digit("2");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}

void MainWindow::on_Digit3_clicked()//3
{

    Calc.push_digit("3");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}
void MainWindow::on_Digit4_clicked()//4
{
    Calc.push_digit("4");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}


void MainWindow::on_Digit5_clicked()//5
{

    Calc.push_digit("5");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}

void MainWindow::on_Digit6_clicked()//5
{

    Calc.push_digit("6");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}
void MainWindow::on_Digit7_clicked()//7
{

    Calc.push_digit("7");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}


void MainWindow::on_Digit8_clicked()//8
{

    Calc.push_digit("8");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}


void MainWindow::on_Digit9_clicked()//9
{

    Calc.push_digit("9");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}

void MainWindow::on_Digit0_clicked()//0
{

    Calc.push_digit("0");
    result1=std::stof(Calc.check());
    QString Y;
    Y.setNum (result1,'g', Calc.degree());
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
    ui->lcdNumber->display(Calc.resultFunc());
    Calc.clear();
}

void MainWindow::on_clear_clicked()
{
    Calc.clear();
    ui->lcdNumber->display(0);
}

void MainWindow::on_comma_clicked()
{
    Calc.push_digit(".");
    result1=std::stof(Calc.check());
    ui->lcdNumber->display(result1);
}



