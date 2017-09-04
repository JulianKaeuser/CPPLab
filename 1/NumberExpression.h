#ifndef NUMBEREXPRESSION_H
#define NUMBEREXPRESSION_H
#include "Expression.h"

class NumberExpression: public Expression
{
public:
	NumberExpression(double n);
	virtual ~NumberExpression();
	virtual double compute();
private:
    double number;

};

#endif // NUMBEREXPRESSION_H
