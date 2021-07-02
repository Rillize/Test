#ifndef CALCULATOR_H
#define CALCULATOR_H
#endif // CALCULATOR_H
#include <QString>
#include <cmath>
#include <string>


class Calculator
{
    int n=0;
    std::string a="";
    std::string b="";
    bool digit1=false;
    bool digit2=false;
    bool plus=false;
    bool minus=false;
    bool equal=false;
    bool multiplication=false;
    bool division=false;
    bool operation=false;
    bool comma=false;
    float aF=0;
    float bF=0;
    float result;

public:
    std::string push_digit(std::string y)
    {
        if(y=="."&&comma)
        {
            return "";
        }
        n++;
        if(digit1&&operation==false)
        {
            a=a+y;
            return a;
        }
        if(digit2)
        {
            b=b+y;
            return b;
        }
        if(equal)//если после вычисления прибавляем к результату еще число.
        {
            a=result;
            b=y;
            return b;
        }
        if(digit1==false)
        {
            a=y;
            digit1=true;
            return a;
        }
        if(digit2&&operation)//вводим число из нескольких цифр (аргумент b)
        {
            b=b+y;
            return b;
        }
        if(digit1&&operation&&digit2==false)//вводим одно и то же число в качестве второго аргумента
        {
            b=y;
            digit2=true;
            return b;
        }
        if(digit1&&operation==false)//вводим число из нескольких цифр( аргумент a)
        {
            a=a+y;
            return a;
        }

    }
    int degree()
    {
        return n;
    }
    float resultFunc()
    {
        if(plus)
        {
            aF=std::stof(a);
            bF=std::stof(b);
            result=aF+bF;
        }
        if(division)
        {
            aF=std::stof(a);
            bF=std::stof(b);
            result=aF/bF;
        }
        if(minus)
        {
            aF=std::stof(a);
            bF=std::stof(b);
            result=aF-bF;
        }
        if(multiplication)
        {
            aF=std::stof(a);
            bF=std::stof(b);
            result=aF*bF;
        }
        return result;
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
    }

    void push_multiplication()
    {
        multiplication=true;
        operation=true;
    }

    void push_division()
    {
        division=true;
        operation=true;
    }

    void push_comma()
    {
        comma=true;
    }

    void clear()
    {
        aF=0;
        bF=0;
        digit1=false;
        digit2=false;
        plus=false;
        equal=false;
        operation=false;
        comma=false;
        n=0;
    }
};
