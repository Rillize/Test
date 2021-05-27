#ifndef CALCULATOR_H
#define CALCULATOR_H
#endif // CALCULATOR_H


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
