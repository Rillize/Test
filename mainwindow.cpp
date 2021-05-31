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
    int x=1;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        //Calc.a=Calc.a*pow(10,Calc.n);
        //Calc.a=Calc.a/pow(10,Calc.n);
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;
}
//444

void MainWindow::on_Digit2_clicked()//2
{
    int x=2;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;
}

void MainWindow::on_Digit3_clicked()//3
{
    int x=3;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;
}

void MainWindow::on_Digit4_clicked()//4
{
    int x=4;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;

}


void MainWindow::on_Digit5_clicked()//5
{
    int x=5;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;
}

void MainWindow::on_Digit6_clicked()//5
{
    int x=6;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        //Calc.a=Calc.a*pow(10,Calc.n);
        //Calc.a=Calc.a/pow(10,Calc.n);
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;
}
void MainWindow::on_Digit7_clicked()//7
{
    int x=7;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;
}


void MainWindow::on_Digit8_clicked()//8
{
    int x=8;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;
}


void MainWindow::on_Digit9_clicked()//9
{
    int x=9;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.b,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }

    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.a==0&&Calc.comma==true&&Calc.Digit1==true)
    {
        Calc.a=(Calc.a+x/pow(10,Calc.n));
        QString Y;
        Y.setNum (Calc.a,'g', Calc.n);
        ui->lcdNumber->display(Y);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }

    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }

    Calc.Digit1=true;
    Calc.n++;
}


void MainWindow::on_Digit0_clicked()//0
{
    int x=0;
    if(Calc.comma==true&&Calc.Digit1==true&&Calc.operation!=true)
    {
        Calc.a=(Calc.a+x)/10;
        ui->lcdNumber->display(ceil(Calc.a*10000)/10000);
    }
    if(Calc.comma==true&&Calc.Digit2==true)
    {
        Calc.b=(Calc.b+x)/10;
        ui->lcdNumber->display(ceil(Calc.b*10000)/10000);

    }
    if(Calc.equal==true)//если после вычисления прибавляем к результату еще число.
    {
        Calc.a=Calc.result;
        Calc.b=x;
    }
    if(Calc.Digit1==false)
    {
        Calc.a=x;
        ui->lcdNumber->display(Calc.a);
    }

    if(Calc.Digit2==true&&Calc.operation==true&&Calc.comma==false)//вводим число из нескольких цифр (аргумент b)
    {
        Calc.b=Calc.b*10+x;
        ui->lcdNumber->display(Calc.b);
    }
    if(Calc.Digit1==true&&Calc.operation==true&&Calc.Digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        Calc.b=x;
        Calc.Digit2=true;
        ui->lcdNumber->display(Calc.b);
    }
    if(Calc.Digit1==true&&Calc.operation==false&&Calc.comma==false)//вводим число из нескольких цифр( аргумент a)
    {
        Calc.a=Calc.a*10+x;
        ui->lcdNumber->display(Calc.a);
    }
    Calc.Digit1=true;
    Calc.n++;

}

void MainWindow::on_summ_clicked()//сложение
{
    Calc.plus=true;
    Calc.operation=true;
    Calc.comma=false;
    Calc.n=0;

}

void MainWindow::on_minus_clicked()//вычитание
{
    Calc.minus=true;
    Calc.operation=true;
    Calc.comma=false;
    Calc.n=0;
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



