#include <iostream>
#include <limits>
#include "functions.h"
#include "CharGenerator.h"
#include "PatternPrinter.h"




int main() {
//std::cout << "Hello World" << std::endl; // prints "Hello World"
std::cout << "int:" 	<< sizeof(int)	<< std::endl;
std::cout << "uint:" 	<< sizeof(unsigned int)	<< std::endl;
std::cout << "double:" 	<< sizeof(double)	<< std::endl;
std::cout << "ushort:" 	<< sizeof(unsigned short)	<< std::endl;
std::cout << "bool:" 	<< sizeof(bool)	<< std::endl;
std::cout << "lim int:"	<< std::numeric_limits<int>::min() << "  " << std::numeric_limits<int>::max()	<< std::endl;
std::cout << "lim uint:"	<< std::numeric_limits<unsigned int>::min() << "  " << std::numeric_limits<unsigned int>::max()	<< std::endl;
std::cout << "lim double:"	<< std::numeric_limits<double>::min() << "  " << std::numeric_limits<double>::max()	<< std::endl;
std::cout << "lim ushort:"	<< std::numeric_limits<unsigned short>::min() << "  " << std::numeric_limits<unsigned short>::max()	<< std::endl;
std::cout << "lim bool:"	<< std::numeric_limits<bool>::min() << "  " << std::numeric_limits<bool>::max()	<< std::endl;

CharGenerator chargen;
for (int ii = 0; ii<14; ii++){
char next = chargen.generateNextChar();
std::cout << next << std::endl;
}


fun::printFigure();

PatternPrinter patPrint;
patPrint.printPattern();

}


