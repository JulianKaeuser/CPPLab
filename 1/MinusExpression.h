#ifndef MINUSEXPRESSION_H
#define MINUSEXPRESSION_H
#include "BinaryExpression.h"

class MinusExpression: public BinaryExpression
{
public:
	MinusExpression(ExpressionPtr l, ExpressionPtr r);
	virtual ~MinusExpression();
	virtual double compute();

};

#endif // MINUSEXPRESSION_H
