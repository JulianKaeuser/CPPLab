#ifndef STUDENTASSISTANT_H
#define STUDENTASSISTANT_H
#include "Student.h"
#include "Employee.h"

class StudentAssistant: public Student, public Employee
{
public:
	StudentAssistant(const std::string &name, const std::string &studentID, const std::string &boss);
	~StudentAssistant();
	virtual std::string getInfo() const;
};

#endif // STUDENTASSISTANT_H
