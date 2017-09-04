#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
public:
	Person(const std::string &name);
	virtual ~Person();
	virtual std::string getInfo() const;
protected:
    std::string name;

};

#endif // PERSON_H
