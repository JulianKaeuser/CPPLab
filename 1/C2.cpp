#include "C2.h"
#include <iostream>

C2::C2(int number):
number(number)
{
	
	std::cout << "C2 created with: " << number << std::endl;
}

C2::~C2()
{
}

int C2::getNumber() const{
	return number;
	}
	
bool C2::operator >=(const C2& rhs) const{
	return (number >= rhs.getNumber());
	}
