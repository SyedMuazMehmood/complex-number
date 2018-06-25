#ifndef COMPLEXNUMBER_H
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class ComplexNumber
{
    public:
    ComplexNumber();
    ComplexNumber(float,float);
    ComplexNumber(ComplexNumber& clonezl);
    float setreal(float)
    float setimg(float)
    float getreal();
    float getimg();
    ComplexNumber add(ComplexNumber, ComplexNumber);
    void display();
    private:
        float real,img;
};

#endif // COMPLEXNUMBER_H
