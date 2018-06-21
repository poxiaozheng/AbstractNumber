#ifndef INTERERNUMBER_H
#define INTERERNUMBER_H
#include"RealNumber.h"
class IntegerNumber :public RealNumber
{
public:
	int a;
	IntegerNumber();
	IntegerNumber(int a);
	void print();
	IntegerNumber add(const IntegerNumber& other);
	IntegerNumber mul(const IntegerNumber& other);

};
#endif // !INTERERNUMBER_H;
