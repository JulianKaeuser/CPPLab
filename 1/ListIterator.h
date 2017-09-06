#ifndef LISTITERATOR_H
#define LISTITERATOR_H
//#include "List.h"
#include "ListItem.h"
template<typename T> class List;

template<typename T>
class ListIterator
{
public:
	ListIterator(List<T> const *list, ListItem<T> *item);
	~ListIterator();
	T& operator*();
	bool operator!=(const ListIterator<T> &other) const;
	ListIterator<T>& operator++(); //prefix ++
	ListIterator<T> operator++(int); // postfix ++
	ListIterator<T>& operator--(); //prefix --
	ListIterator<T> operator--(int); //postfix --

private:
    List<T> const *list;
	ListItem<T> *item;

};
#include "ListIterator.tpp"

#endif // LISTITERATOR_H

