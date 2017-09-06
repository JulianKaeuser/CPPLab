#ifndef LIST_H
#define LIST_H

template<typename T>
class List;
#include <iostream>
#include "ListItem.h"
#include <cstddef>
#include "ListIterator.h"

template<typename T>
std::ostream& operator<< (std::ostream& os, const List<T>& list);

template<typename T>
class List
{
friend class ListIterator<T>;
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
	ListIterator<T> begin();
	ListIterator<T> end();
	friend std::ostream& operator<< <> (std::ostream& out, const List<T> &list);
private:
   ListItem<T> *first;
   ListItem<T> *last;
   size_t currentSize;
   ListItem<T> *getElementAt(size_t pos);


};

//template<typename T>
//std::ostream& operator<<(std::ostream&, const List<T>&);
#include "List.tpp"
#endif // LIST_H
