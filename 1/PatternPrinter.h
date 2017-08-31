#include <iostream>
#include "CharGenerator.h"

#ifndef PATTERNPRINTER_HPP_
#define PATTERNPRINTER_HPP_


	class PatternPrinter{
	public:
		 PatternPrinter();
		 void printPattern();
	private:
	  CharGenerator charGen;
	  void printNChars(int n);
	  int readWidth();
	};


#endif /*PATTERNPRINTER_HPP_ */