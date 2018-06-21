#include "Comeplxnumber.h"
#include<iostream>
using namespace std;
ComplexNumber::ComplexNumber()
{

}
ComplexNumber::ComplexNumber(double a,double b)
{
	real = a;
	image = b;
}
void ComplexNumber::print()
{
	cout << real << "+" << image << "j" << endl;

}
ComplexNumber  ComplexNumber::operator+(const ComplexNumber & other)
{
	return ComplexNumber(real+ other.real,image+other.image);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber & other)
{
	return ComplexNumber((real*other.real)-(image*other.image),(image*other.real)+(real*other.image));
}




