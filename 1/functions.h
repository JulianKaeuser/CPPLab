#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

#include <cstddef>

namespace fun {
/**
* @file functions.h
* @author Mirko, Julian
* @brief irgend ein scheiß fürs praktikum
 */

/**
* @name printSpaces(int n);
* @author Mirko, Julian
* @brief prints n spaces
* @param number of spaces
* @return void
*/

void printSpaces(int n);

/**
* @name printStars(int n);
* @author Mirko, Julian
* @brief prints n stars and an end of line
* @param number of stars
* @return void
*/

void printStars(int n);

/**
* @name enum Direction
* @author Mirko, Julian
* @brief siehe unten...
*/
enum Direction {left, right};

/**
* @name printFigure(Direction d, int n);
* @author Mirko, Julian
* @brief prints a boring figure
* @param d left or right
* @param n number of stars
* @return void
*/


void printFigure(Direction d, int n); 

/**
* @name printFigure();
* @author Mirko, Julian
* @brief prints a boring figure
* @return void
*/

void printFigure();

char nextChar();

void printChar(int n);

void printChar(int n, void (*fptr));

void swap(int &a, int &b);

void swap (int *a, int *b);

void printElements (const int * const array, const size_t size); 

void printElements2 (const int * const array, const size_t size); 

void printElements3 (const int * const begin, const int * const end); 

int* findArrayPtr(size_t * const sizeP);
};


#endif /* FUNCTIONS_HPP_ */