#include <iostream>
#include "CharGenerator.h"
#include "PatternPrinter.h"


	
	PatternPrinter::PatternPrinter():
		//initializer list:
		charGen(CharGenerator())
		{
	}
	
	void PatternPrinter::printPattern(){
		PatternPrinter::printNChars(PatternPrinter::readWidth());
		
	}
	
	/**
	 * @brief Prints N chars to the console (bullshit documentation...)
	 * @param n how many chars shall be printed?
	 */
	void PatternPrinter::printNChars(int n){
		for (int a=0; a<n; a++){
			std::cout << charGen.generateNextChar();
			
		}
		std::cout << std::endl;
	}
	
	/**
	 * @brief reads the desired width of the pattern from the console
	 * @return the width
	 */
	int PatternPrinter::readWidth(){
	    int width = -1;
	    
	
	    while(width<0){
		    std::cout << "width larger than zero" << std::endl;
		    std::cin >> width;
	    }
		return width;
	}
	