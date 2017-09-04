#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListItem.h"
#include <cstddef>
#include "ListIterator.h"
class List
{
friend class ListIterator;	

public:
	List();
	~List();
	List(const List &other);
	void appendElement (int i);
	void prependElement(int i);
	void insertElementAt(int i, size_t pos);
	size_t getSize() const;
	int & getNthElement(size_t n);
	int & getFirst();
	int & getLast();
	int deleteFirst();
	int deleteLast();
	int deleteAt(size_t pos);
	ListIterator begin();
	ListIterator end();
private:
   ListItem *first;
   ListItem *last;
   size_t currentSize;
   ListItem *getElementAt(size_t pos);

friend std::ostream& operator<<(std::ostream&, List&);
};
//std::ostream &operator<<(std::ostream &stream, List &list);
#endif // LIST_H
