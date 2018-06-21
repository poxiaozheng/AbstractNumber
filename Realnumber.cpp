#include "Realnumber.h"
#include<iostream>
using namespace std;
RealNumber::RealNumber()
{

}
RealNumber::RealNumber(double a) :a(a)
{

}
void RealNumber::print()
{
	cout << a << endl;
	
}
RealNumber RealNumber:: operator+(const RealNumber & other)
{
	return RealNumber(a + other.a);
}

RealNumber RealNumber::operator*(const RealNumber & other)
{
	return  RealNumber(a* other.a);
}
