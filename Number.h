#ifndef ABSTRACT_NUMBER_H
#define ABSTRACT_NUMBER_H


class Number
{
	public:
	
	virtual void print();
	virtual Number operator+(const Number& other);
	virtual Number operator*(const Number& other) ;
};



#endif 