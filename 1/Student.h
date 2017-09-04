#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student: public Person{
public:
	Student(const std::string &name, const std::string &studentID);
	virtual ~Student();
	virtual std::string getInfo() const;
private:
    std::string studentID;
};

#endif // STUDENT_H
