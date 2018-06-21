#include<iostream>
#include"ComplexNumber.h"
#include"IntegerNumber.h"
#include"RealNumber.h"
using namespace std;
int main()
{
	RealNumber R(2);
	auto r1 = R.add(2.5);
	auto r2 = R.mul(2.5);
	r1.print();
	r2.print();
	IntegerNumber I(5);
	auto i1 = I.add(3);
	auto i2 = I.mul(3);
	i1.print();
	i2.print();
	ComplexNumber C1(2,3),C2(5,5);
	auto c1 = C1.add(C2);
	auto c2 = C1.mul(C2);
	c1.print();
	c2.print();
	system("pause");
	return 0;
}
