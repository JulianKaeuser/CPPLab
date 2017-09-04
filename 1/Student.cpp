#include "Student.h"
#include <iostream>

Student::Student(const std::string &name, const std::string &studentID):
studentID(studentID),
Person(name)
{
	std::cout << "creating student with name " << name <<" studentId " << studentID <<std::endl;
}

Student::~Student()
{
	std::cout << "killing student with name " << name <<" studentId " << studentID <<std::endl;
}

std::string Student::getInfo() const{
	//Person::getInfo();
	std::string c = std::string(", student ID: ");
	return Person::getInfo() +c+ studentID;
}

