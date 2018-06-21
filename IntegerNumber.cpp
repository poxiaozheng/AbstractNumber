#include "IntegerNumber.h"
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
IntegerNumber IntegerNumber::add(const IntegerNumber & other)
{
	return IntegerNumber(a + other.a);
}

IntegerNumber IntegerNumber::mul(const IntegerNumber & other)
{
	return IntegerNumber(a* other.a);
}


