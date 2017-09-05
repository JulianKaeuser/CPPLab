#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string &name, const std::string &boss):
Person(name),
boss(boss)
{
	std::cout << name << " employed by: "<< boss << std::endl;
}

Employee::~Employee()
{
	std::cout << "killing "<< name <<"("<< boss <<")"<< std::endl;
}
std::string Employee::getInfo() const{
	std::string info = std::string("Name: ") + name + std::string(" - ") + std::string("Boss: ") + boss;
	return info;
}

