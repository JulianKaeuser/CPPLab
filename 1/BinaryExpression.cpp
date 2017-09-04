#include "BinaryExpression.h"
#include <iostream>

BinaryExpression::BinaryExpression(ExpressionPtr l, ExpressionPtr r):
left(l),
right(r)
{
	std::cout << "creating BinaryExpression " << std::endl;
}

BinaryExpression::~BinaryExpression()
{
	std::cout << "deleting BinaryExpression " << std::endl;
}

