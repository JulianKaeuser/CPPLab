#ifndef PLUSEXPRESSION_H
#define PLUSEXPRESSION_H
#include "BinaryExpression.h"

class PlusExpression: public BinaryExpression
{
public:
	PlusExpression(ExpressionPtr l, ExpressionPtr r);
	virtual ~PlusExpression();
	virtual double compute();

};

#endif // PLUSEXPRESSION_H
