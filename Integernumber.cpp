#include "Integernumber.h"
#include<iostream>
using namespace std;
IntegerNumber::IntegerNumber()
{
}
IntegerNumber::IntegerNumber(int a) :a(a)
{

}

void IntegerNumber::print()
{
	cout << a << endl;
	

}
IntegerNumber IntegerNumber::operator+(const IntegerNumber & other)
{
	return IntegerNumber(a + other.a);
}

IntegerNumber IntegerNumber::operator*(const IntegerNumber & other)
{
	return IntegerNumber(a* other.a);
}



