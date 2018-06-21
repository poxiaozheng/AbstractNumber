#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H


#include"Number.h"
class ComplexNumber :public Number
{
public:
	double real, image;
	ComplexNumber();
	ComplexNumber(double real,double image);
	void print();
	ComplexNumber  add(const ComplexNumber & other);
	ComplexNumber  mul(const ComplexNumber & other);
};
#endif // !COMPLEXNUMBER_H
