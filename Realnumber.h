
#ifndef REALNUMBER_H
#define REALNUMBER_H


#include"Number.h"
class RealNumber :public Number
{
public:
	double a;
	RealNumber();
	RealNumber(double a);
	void print();
	RealNumber operator+(const RealNumber& other);
	RealNumber operator*(const RealNumber& other);


};
#endif // !REALNUMBER_H