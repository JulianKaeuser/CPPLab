#include <iostream>
#include "CharGenerator.h"


	
	CharGenerator::CharGenerator(char initialChar):
		//initializer list:
		nextChar(initialChar)
		{
	}
	
	char CharGenerator::generateNextChar(){
		if (nextChar==('z'+1)){
			nextChar = 'a';
		}
		return nextChar++;
	}
	
