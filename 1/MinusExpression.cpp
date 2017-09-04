#include "MinusExpression.h"
#include <iostream>

MinusExpression::MinusExpression(ExpressionPtr l, ExpressionPtr r):
BinaryExpression::BinaryExpression(l, r)
{
	std::cout << "Creating MinusExpression" << std::endl;
}

MinusExpression::~MinusExpression()
{
	std::cout << "Deleting MinusExpression" << std::endl;
}

double MinusExpression::compute(){
	return (left->compute())-(right->compute());
}
