#ifndef ABSTRACT_NUMBER_H
#define ABSTRACT_NUMBER_H


class Number
{
	public:
	
	virtual void print();
	virtual Number add(const Number& other);
	virtual Number mul(const Number& other) ;
};



#endif 
