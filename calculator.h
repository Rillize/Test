#ifndef CALCULATOR_H
#define CALCULATOR_H
#endif // CALCULATOR_H
#include <QString>
#include <cmath>



class Calculator
{

public:
    int buttonNumber=0;
    float a=0;
    float b=0;
    bool Digit1;
    bool Digit2;
    bool plus=false;
    bool minus=false;
    bool equal=false;
    bool multiplication=false;
    bool division=false;
    bool operation=false;
    bool comma=false;
    int n=0;
    float Calculate(int x)
    {
        if(comma==true&&Digit1==true&&operation!=true)
        {
            a=(a+x/pow(10,n));
            return a;
        }

        if(comma==true&&Digit2==true)
        {
            b=(b+x/pow(10,n));
            return b;
        }

        if(equal==true)//если после вычисления прибавляем к результату еще число.
        {
            a=result;
            b=x;
            return b;
        }

        if(Digit1==false)
        {
            a=x;
            return a;
        }

        if(a==0&&comma==true&&Digit1==true)
        {
            a=(a+x/pow(10,n));
           return a;
        }

        if(Digit2==true&&operation==true&&comma==false)//вводим число из нескольких цифр (аргумент b)
        {
            b=b*10+x;
            return b;
        }

        if(Digit1==true&&operation==true&&Digit2==false)//вводим одно и то же число в качестве второго аргумента
        {
            b=x;
            Digit2=true;
            return b;
        }

        if(Digit1==true&&operation==false&&comma==false)//вводим число из нескольких цифр( аргумент a)
        {
            a=a*10+x;
            return a;
        }
    }

    float summ(float a,float b)
    {
        return a+b;
    }

    float result;
    float subtraction(float a,float b)
    {
        return a-b;
    }

    float multiply(float a, float b)
    {
        return a*b;
    }
    float divide(float a, float b)
    {
        return a/b;
    }


};
