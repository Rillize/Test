#ifndef CALCULATOR_H
#define CALCULATOR_H
#endif // CALCULATOR_H
#include <QString>
#include <cmath>



class Calculator
{
    float x;
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

    float result;
public:
    int n=0;

    void push_digit(float y)
    {
        Digit1=true;
        n++;
        x=y;
    }
    float Calculate()
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

    float resultFunc()
    {

        if(plus)
        {
            result=summ(a,b);
        }
        if(division)
        {
            result=divide(a,b);
        }
        if(minus)
        {
            result=subtraction(a,b);
        }
        if(multiplication)
        {
            result=multiply(a,b);
        }
        return result;
    }

    float summ(float a,float b)
    {
        return a+b;
    }

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
    void push_plus()
    {
        plus=true;
        operation=true;
        comma=false;
    }
    void push_minus()
    {
        minus=true;
        operation=true;
        comma=false;
    }
    void push_multiplication()
    {
        multiplication=true;
        operation=true;
        comma=false;
    }
    void push_division()
    {
        division=true;
        operation=true;
        comma=false;
    }
    void push_comma()
    {
        comma=true;
    }
    void clear()
    {
        a=0;
        b=0;
        Digit1=false;
        Digit2=false;
        plus=false;
        equal=false;
        operation=false;
        comma=false;
        n=0;
    }


};
