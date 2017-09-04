#include "PlusExpression.h"
#include <iostream>

PlusExpression::PlusExpression(ExpressionPtr l, ExpressionPtr r):
BinaryExpression::BinaryExpression(l, r)
{
	std::cout << "Creating PlusExpression" << std::endl;
}

PlusExpression::~PlusExpression()
{
	std::cout << "Deleting PlusExpression" << std::endl;
}

double PlusExpression::compute(){
	return (left->compute())+(right->compute());
}

