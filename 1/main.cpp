#include <iostream>
#include <limits>
#include "functions.h"
#include "CharGenerator.h"
#include "PatternPrinter.h"
#include "Vector3.h"
#include "List.h"

using namespace std;


void foo(int &i) {
int i2 = i;
int &i3 = i;
std::cout << "i = " << i << std::endl;
std::cout << "i2 = " << i2 << std::endl;
std::cout << "i3 = " << i3 << std::endl;
std::cout << "&i = " << &i << std::endl;
std::cout << "&i2 = " << &i2 << std::endl;
std::cout << "&i3 = " << &i3 << std::endl;
}


int main() {
	
// A6)
// A6.1
cout << "A6-1" << endl;
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int d = sizeof(array)/sizeof(int);
for (int ii = 0; ii<d; ii++){
	//cout << *(array+ii) << endl;
} 
cout << "/A6-1"<< endl;

// A6.2)
cout << "A6-2" << endl;
fun::printElements(array, d);
cout << "/A6-2"<< endl;

// A6.3)
cout << "A6-3" << endl;
fun::printElements2(array, d);
cout << "/A6-3"<< endl;

// A6.4)
cout << "A6-4" << endl;
fun::printElements3(array, array+d);
cout << "/A6-4"<< endl;

// A6.5)
cout << "A6-5" << endl;
fun::printElements3(array+3, array+d-2);
cout << "/A6-5"<< endl;

// A6.6)
cout << "A6-6" << endl;
size_t dynSize;
size_t * const sizeP = &dynSize;
//int *dynPtr = fun::findArrayPtr(sizeP);

//fun::printElements(dynPtr, dynSize);


cout << "/A6-6"<< endl;
	
	
//A7)

//A7.4)
cout << "A7-4"<<endl;
List *list = new List();
cout << list->getSize() << endl;

list->appendElement(5);
list->prependElement(17);
list->insertElementAt(14, 2);
cout << *list <<endl;
//list->deleteFirst();
cout << list->getNthElement(0) << endl;
cout << list->getNthElement(1) << endl;
cout << list->getNthElement(2) << endl;
cout << list->getNthElement(14) << endl;
//list->deleteLast();
list->deleteAt(37);
//list->prependElement(42);
//list->appendElement(42);

cout << list->getSize() << endl;
cout << "copying list " <<endl << endl;

List *list2 = new List(*list);

cout << *list2 <<endl;
cout << "/A7-4" << endl;
	
	
	
	
	
	
/*	
// A5)	
int var = 42;
cout << "&var = " << &var << endl;
foo(var);

	
	
int a = 1;
int b = 2;


fun::swap(a,b);


cout << "Wert von a,b " << a << b << endl;
cout << "Wert von &a,&b " << &a << &b << endl;

int *aP = &a;
int *bP = &b;	
fun::swap(aP,bP);
cout << "Wert von aP,bP " << aP << bP << endl;

cout << "Wert von a,b " << a << b << endl;
cout << "Wert von &a,&b " << &a << &b << endl;
	
	
int intVal = 42;
int *pIntVal = &intVal;



cout << "Wert von IntVal " << intVal << endl;
cout << "Wert von &IntVal " << &intVal << endl;
cout << "Wert von pIntVal " << pIntVal << endl;
cout << "Wert von *pIntVal " << *pIntVal << endl;
cout << "Wert von &pIntVal " << &pIntVal << endl;
	
	
	
	
	
	
/*	
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
*/



/*
CharGenerator chargen;
for (int ii = 0; ii<14; ii++){
char next = chargen.generateNextChar();
std::cout << next << std::endl;
}

Vector3 abc = Vector3(1,3,5);
Vector3 abc2 = Vector3(2,4,6);


std::cout << abc + abc2 <<std::endl;

fun::printFigure();

PatternPrinter patPrint;
patPrint.printPattern();
*/
}


