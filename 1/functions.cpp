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

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
	
}

void swap(int *a, int *b){
	int c = *a;
	          //std::cout << "c=" << c << std::endl;
	          //std::cout << "b=" << b << std::endl;
	          //std::cout << "a=" << a << std::endl;
	*a = *b;
	          //std::cout << "a=" << a << std::endl;
	          //std::cout << "*a=" << *a << std::endl;
	*b = c;
	          //std::cout << "b=" << b << std::endl;
}


void printElements (const int * const array, const size_t size){
	for (size_t ii=0; ii<size; ii++){
		std::cout << *(array+ii) << std::endl;
	}
	
}

void printElements2 (const int * const array, const size_t size){
	for (const int *p = array; p!=array+size; p++){
		std::cout << *p << std::endl;
	}
	
}

void printElements3 (const int * const begin, const int * const end){
	for (const int *p = begin; p!= end; p++){
		std::cout << *p << std::endl;
	}
	
}

int* findArrayPtr(size_t * const sizeP){
	size_t size = 0;
	while (size<1){
     std::cout << "Size" << std::endl;
	 std::cin >> size;
    }
	int *arrayPtr = new int[size];
	for (int ii=0; ii<size; ii++){
		std::cout << "number " << ii << "please:" << std::endl;
		std::cin >> arrayPtr[ii];
	}
	*sizeP = size;
	return arrayPtr;
}
};
