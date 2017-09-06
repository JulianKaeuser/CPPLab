#include <iostream>
#include <limits>
#include "functions.h"
#include "CharGenerator.h"
#include "PatternPrinter.h"
#include "Vector3.h"
#include "List.h"
#include "TreeNode.h"
#include "Person.h"
#include "Student.h"
#include <string>
#include "NumberExpression.h"
#include "PlusExpression.h"
#include "MinusExpression.h"
#include "StudentAssistant.h"
#include "C.h"
#include "maximum.h"
#include "C2.h"
#include "A16.h"
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

bool lt (int lhs){
	return A16::lessThan(lhs, 4);
}

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

void printPersonInfo(const Person *person){
	cout << person->getInfo() << endl;
}

int main() {
/*	
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
for (int ii=0; ii<15; ii++){
	list2->appendElement(ii*2);
}

cout << "with iterator " <<endl;
for (ListIterator iter = list2->begin(); iter!=list2->end(); iter++){
	cout << *iter << endl;
}
cout << "/A7-4" << endl;
*/	

// A8)

// A8-2)
/*
cout<< "A8-1" << endl;
TreeNodePtr node = TreeNode::createNode(1, TreeNode::createNode(2), TreeNode::createNode(3));
cout << "new tree " << endl;
node = TreeNode::createNode(4, TreeNode::createNode(5), TreeNode::createNode(6));

cout << "/A8-1" << endl;	
*/

//A9)
//A9-3)
/*
cout << "A9-3" << endl;
string personName = string("Alfons");
string studentName = string("Peter");
string studentID = string("1234567");
Person *p = new Person(personName);
Person *s = new Student(studentName, studentID);
Student *st = new Student(studentName, studentID);

//cout << p->getInfo() << endl;
//cout << s->getInfo() << endl;
//cout << st->getInfo()<< endl;
printPersonInfo(p);
printPersonInfo(s);
printPersonInfo(st);

delete p;
delete s;
delete st;
cout << "/A9-3" << endl;
 * */

// A10
/* 

// A10-1e)
cout << "A10-1" << endl;
NumberExpression *two = new NumberExpression(2.0);
ExpressionPtr twoPtr = two->createExpression(*two);

NumberExpression *three = new NumberExpression(3.0);
ExpressionPtr threePtr = three->createExpression(*three);

PlusExpression *p3 = new PlusExpression(threePtr,threePtr);
ExpressionPtr p1Ptr = p3->createExpression(*p3);

MinusExpression *m2 = new MinusExpression(twoPtr, twoPtr);
ExpressionPtr m2Ptr = m2->createExpression(*m2);

PlusExpression *p2 = new PlusExpression(threePtr,threePtr);
ExpressionPtr p2Ptr = p2->createExpression(*p2);

PlusExpression *p1 = new PlusExpression(p2Ptr,m2Ptr);
ExpressionPtr p1Ptr = p1->createExpression(*p1);

MinusExpression *m1 = new MinusExpression(p2Ptr, twoPtr);
ExpressionPtr m1Ptr = m1->createExpression(*m1);



cout << "/A10-1" << endl;
*/	
	
// A11
/*
//A11.3
string name = "Peter";
string ID = "333";
string boss = "Enis";
StudentAssistant *ahole = new StudentAssistant(name, ID, boss);
std::cout << "STInf: " << ahole->getInfo() << std::endl;
*/

//A12
/*
// A12-2
cout << "A12-2" << endl;
try{
	throw C();
}
catch (C &c){
	cout << "catchign by reference" << endl;
	cout << c.name << endl;
}
catch (C c){
	cout << "catchign by value" << endl;
	cout << c.name << endl;
}

List *list = new List();
for (int ii=0; ii<10; ii++){
	list->appendElement(ii*2);
}
try {
	list->deleteAt(15);
}
catch(const std::out_of_range &c){
	cout << c.what()<<endl;
}


cout << "/A12-2" << endl;
*/

//A13
/*
C2 a(5);
//
C2 b(7);
//short int b = 7;
C2 d = maximum(a, b);
int c = d.getNumber();
cout << "max:" << c<< endl;

//A15
//A15-3
cout << "A15-3" << endl;
List<int> listP;

for (int ii =1; ii<33; ii*=2){
	int a = ii;
	listP.appendElement(a);
	cout<< ii << endl;
}

cout << "list: " << listP << endl;;

cout << "/A15-3" << endl;

 * */
// A16
cout << "A16-1" << endl;
int a[] = {1, 2, 3, 4, 5, 16, 37};
vector<int> v(a, a+(sizeof(a)/sizeof(int)));
A16::print(v);


std::list<int> myList(++v.begin(), v.begin()+=4);
myList.insert( myList.begin(),*--v.end());
v.clear();
A16::print(v);
cout << endl;

A16::print(myList);
remove_copy_if(myList.begin(), myList.end(), std::back_inserter(v), lt);
cout << endl;
cout << "/A16-1" << endl;
	
// A5)	
/*
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


