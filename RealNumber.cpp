#include "RealNumber.h"
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
RealNumber RealNumber::add(const RealNumber & other)
{
	return RealNumber(a + other.a);
}

RealNumber RealNumber::mul(const RealNumber & other)
{
	return  RealNumber(a* other.a);
}

