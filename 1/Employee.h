#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee: public virtual Person
{
public:
	Employee(const std::string &name, const std::string &boss);
	~Employee();
	virtual std::string getInfo() const;
protected:
	std::string boss;
};

#endif // EMPLOYEE_H
