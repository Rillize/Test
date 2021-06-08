#ifndef CALCULATOR_H
#define CALCULATOR_H
#endif // CALCULATOR_H
#include <QString>
#include <cmath>
#include <string>


class Calculator
{
    std::string x="";
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

void push_digit(std::string y)
    {
    if(y=="."&&comma)
        {
            return;
        }
        n++;
        x=y;
    }
    int degree()
    {
        return n;
    }
std::string check()
{


    if(digit1==true&&operation==false)
    {
        a=a+x;
        return a;
    }
    if(digit2==true)
    {
        b=b+x;
        return b;
    }
    if(equal==true)//если после вычисления прибавляем к результату еще число.
    {
        a=result;
        b=x;
        return b;
    }
    if(digit1==false)
    {
        a=x;
        digit1=true;
        return a;
    }

    if(digit2==true&&operation==true)//вводим число из нескольких цифр (аргумент b)
    {
        b=b+x;
        return b;
    }
    if(digit1==true&&operation==true&&digit2==false)//вводим одно и то же число в качестве второго аргумента
    {
        b=x;
        digit2=true;
        return b;
    }
    if(digit1==true&&operation==false)//вводим число из нескольких цифр( аргумент a)
    {
        a=a+x;
        return a;
    }

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
