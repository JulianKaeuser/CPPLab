#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListItem.h"
#include <cstddef>
#include "ListIterator.h"

template<typename T>
class List
{
friend class ListIterator;	

public:
	List();
	~List();
	List(const List &other);
	void appendElement (const T &i);
	void prependElement(const T &i);
	void insertElementAt(const T &i, size_t pos);
	size_t getSize() const;
	T & getNthElement(const size_t n)const ;
	T & getFirst() const;
	T & getLast() const;
	void deleteFirst();
	void deleteLast();
	void deleteAt(const size_t pos);
	//ListIterator begin();
	//ListIterator end();
private:
   ListItem<T> *first;
   ListItem<T> *last;
   size_t currentSize;
   ListItem<T> *getElementAt(size_t pos);

friend std::ostream& operator<<(std::ostream&, List&);
};

#include "List.tpp"
//std::ostream &operator<<(std::ostream &stream, List &list);
#endif // LIST_H
