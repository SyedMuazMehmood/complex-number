#include <iostream>
#include <string>
#include <string.h>
#include "ComplexNumber.h"
ComplexNumber::ComplexNumber()
{
     this->real=0
     this->img=0
}

ComplexNumber::ComplexNumber(float real,float img)
{
    this->real=real;
    this->img=img;
}
ComplexNumber::ComplexNumber(ComplexNumber& clone)
{
    this->real=clone.real;
    this->img=clone.img;
}
float ComplexNumber::setreal(float r)
{
    this->real=r;
}
float ComplexNumber::steimg(float i)
{
    this->img=i;
}
