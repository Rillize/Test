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
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(1),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;

}

void MainWindow::on_Digit2_clicked()//2
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(2),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;
}

void MainWindow::on_Digit3_clicked()//3
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(3),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;
}

void MainWindow::on_Digit4_clicked()//4
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(4),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;

}


void MainWindow::on_Digit5_clicked()//5
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(5),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;
}

void MainWindow::on_Digit6_clicked()//5
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(6),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;
}
void MainWindow::on_Digit7_clicked()//7
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(7),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;
}


void MainWindow::on_Digit8_clicked()//8
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(8),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;
}


void MainWindow::on_Digit9_clicked()//9
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(9),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;
}


void MainWindow::on_Digit0_clicked()//0
{
    Calc.n++;
    QString Y;
    Y.setNum (Calc.Calculate(0),'g', Calc.n);
    ui->lcdNumber->display(Y);
    Calc.Digit1=true;
}

void MainWindow::on_summ_clicked()//сложение
{
    Calc.plus=true;
    Calc.operation=true;
    Calc.comma=false;


}

void MainWindow::on_minus_clicked()//вычитание
{
    Calc.minus=true;
    Calc.operation=true;
    Calc.comma=false;

}

void MainWindow::on_multiplication_clicked()//умножение
{
    Calc.multiplication=true;
    Calc.operation=true;
    Calc.comma=false;
}

void MainWindow::on_division_clicked()//деление
{

    Calc.division=true;
    Calc.operation=true;
    Calc.comma=false;
}



void MainWindow::on_result_clicked()//равно
{
    if(Calc.plus)
    {
        Calc.result=Calc.summ(Calc.a,Calc.b);
        QString Y;
        Y.setNum (Calc.result,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.division)
    {
        Calc.result=Calc.divide(Calc.a,Calc.b);
        QString Y;
        Y.setNum (Calc.result,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.minus)
    {
        Calc.result=Calc.subtraction(Calc.a,Calc.b);
        QString Y;
        Y.setNum (Calc.result,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.multiplication)
    {
        Calc.result=Calc.multiply(Calc.a,Calc.b);
        QString Y;
        Y.setNum (Calc.result,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    Calc.equal=true;
    Calc.a=0;
    Calc.b=0;
    Calc.Digit1=false;
    Calc.Digit2=false;
    Calc.plus=false;
    Calc.minus=false;
    Calc.operation=false;
    Calc.multiplication=false;
    Calc.n=0;
}


void MainWindow::on_clear_clicked()
{
    ui->lcdNumber->display(0);
    Calc.a=0;
    Calc.b=0;
    Calc.Digit1=0;
    Calc.Digit2=0;
    Calc.plus=false;
    Calc.equal=false;
    Calc.operation=false;
    Calc.comma=false;
    Calc.n=0;//
}

void MainWindow::on_comma_clicked()
{
    Calc.comma=true;
}



