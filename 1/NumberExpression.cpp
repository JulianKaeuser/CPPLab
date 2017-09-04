#include "NumberExpression.h"
#include <iostream>

NumberExpression::NumberExpression(double n):
number(n)
{
	std::cout<<"creating numberExpression" << std::endl;
}

NumberExpression::~NumberExpression()
{
	std::cout << "deleting numberExpression" << std::endl;
}

double NumberExpression::compute(){
	return number;
}

