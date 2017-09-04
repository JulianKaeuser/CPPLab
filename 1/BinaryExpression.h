#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H
#include "Expression.h"
#include <memory>

class BinaryExpression;



class BinaryExpression: public Expression
{
public:
	BinaryExpression(ExpressionPtr l, ExpressionPtr r);
	virtual ~BinaryExpression();
	virtual double compute() = 0;
protected:
    ExpressionPtr left;
	ExpressionPtr right;

};

#endif // BINARYEXPRESSION_H
