#include <iostream>

#ifndef CHARGENERATOR_HPP_
#define CHARGENERATOR_HPP_


	class CharGenerator{
	public:
		 CharGenerator(char initialChar = 'f');
		 char generateNextChar();
	private:
	  char nextChar;   
	};


#endif /*CHARGENERATOR_HPP_ */