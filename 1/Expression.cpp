#include "Expression.h"
#include <iostream>

Expression::Expression()
{
	std::cout << "Creating Expression" << std::endl;
}

Expression::~Expression()
{
	std::cout << " Deleting Expression" << std::endl;
}

ExpressionPtr Expression::createExpression( Expression &exp){
	ExpressionPtr p = ExpressionPtr(&exp);
	return p;
}
