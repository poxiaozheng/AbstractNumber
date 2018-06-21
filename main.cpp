#include<iostream>

#include"ComplexNumber.h"
#include"IntegerNumber.h"
#include"RealNumber.h"
using namespace std;
int main()
{
	RealNumber R1(2), R2(2.5);
		RealNumber R3 = R1 + R2;
		RealNumber R4 = R1 * R2;
	R3.print();
	R4.print();
	IntegerNumber I1(5), I2(3);
	IntegerNumber I3 = I1 + I2;
	IntegerNumber I4 = I1 * I2;
	I3.print();
	I4.print();
	ComplexNumber C1(2,3),C2(5,5);
	ComplexNumber C3 = C1 + C2;
	ComplexNumber C4 = C1 * C2;
	C3.print();
	C4.print();
	return 0;
}
