
#ifndef INTERERNUMBER_H
#define INTERERNUMBER_H


#include"Realnumber.h"
class IntegerNumber :public RealNumber
{
public:
	int a;
	IntegerNumber();
	IntegerNumber(int a);
	void print();
	IntegerNumber operator+(const IntegerNumber& other);
	IntegerNumber operator*(const IntegerNumber& other);

};
#endif // !INTERERNUMBER_H;