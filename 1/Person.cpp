#include "Person.h"
#include <iostream>

Person::Person(const std::string &name):
name(name)
{
	std::cout << "creating person with name " << name <<std::endl;
}

Person::~Person()
{
	std::cout << "killing person with name " << name <<std::endl;
}

std::string Person::getInfo() const{
	std::string info = std::string("Name ") + name;
	return info;
}

