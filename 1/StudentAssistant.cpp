#include "StudentAssistant.h"

StudentAssistant::StudentAssistant(const std::string &name, const std::string &studentID, const std::string &boss): 
Student(name, studentID),
Employee(name,boss),
Person(name)
{
}

StudentAssistant::~StudentAssistant()
{
}
std::string StudentAssistant::getInfo() const{
std::string info = std::string("Name: ") + name
 + std::string(" - ") + std::string("STID: ") + studentID
 + std::string(" - ") + std::string("Boss: ") + boss;
return info;
}
