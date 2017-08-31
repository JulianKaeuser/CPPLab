#include "functions.h"
#include <iostream>

namespace fun{

void printStars(int n){
	for(int i = 0;i<n;i++ ){
		std::cout	<<"*";
		}
	std::cout << std::endl;
	}
	
void printSpaces(int n){
	for(int i = 0;i<n;i++ ){
		std::cout	<<" ";
		}
	//std::cout << std::endl;
}

void printFigure(Direction d, int n){
	int a = n;
	while(n>0){
		if (d==right){
			printSpaces(a-n);
		}
		printChar(n);
		n--;
	}
	n++;
	while(n<a){
		n++;
		if (d==right){
			printSpaces(a-n);
		}
		printChar(n);
	}
	}
	
void printFigure(){
	int size = 99;
	int dir = 99;
	
	while(size > 80 || (dir != 0 && dir != 1)){
		std::cout << "size" << std::endl;
		std::cin >> size;
		std::cout << "dir" << std::endl;
		std::cin >> dir;
	}
	if(dir == 0){
		printFigure(left,size);
		}
	if(dir == 1){
		printFigure(right,size);
		}
	
}


char nextChar(){
	static int firstCall = 1;
	static int myChar;
	if(firstCall){
		myChar = 'a';
		firstCall = 0;
	}
	if(myChar == 'z'){
		firstCall = 1;
	}
	return myChar++;
}


void printChar(int n){
	for(int i = 0;i<n;i++ ){
		std::cout	<< nextChar();
		}
	std::cout << std::endl;
	}
	
void printChar(int n, char (*fptr)()){
	for(int i = 0;i<n;i++ ){
		std::cout	<< fptr();
		}
	std::cout << std::endl;
	}

};
