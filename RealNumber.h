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
	RealNumber add(const RealNumber& other);
	RealNumber mul(const RealNumber& other);


};
#endif // !REALNUMBER_H
