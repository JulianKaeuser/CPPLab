#ifndef EXPRESSION_H
#define EXPRESSION_H
#include <memory>

class Expression; 

typedef std::shared_ptr<Expression> ExpressionPtr;

class Expression
{
public:
	Expression();
	virtual  ExpressionPtr createExpression( Expression &epx);
	virtual ~Expression();
	virtual double compute() =0;

};

#endif // EXPRESSION_H
