#include "C.h"
#include <iostream>

C::C()
{
	std::cout << "creating C instance" << std::endl;
	char *text = "CInstance";
	name = text;
}

C::C(const C &other){
	std::cout << "copying C instance" << std::endl;
	name = other.name;
}

C::~C()
{
	std::cout << "deleting C instance" << std::endl;
}

