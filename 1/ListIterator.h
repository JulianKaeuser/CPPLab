#ifdef DEBUG_
#ifndef LISTITERATOR_H
#define LISTITERATOR_H
//#include "List.h"
//#include "ListItem.h"


class ListItem;
class List;

class ListIterator
{
public:
	ListIterator(List *list, ListItem *item);
	~ListIterator();
	int& operator*();
	bool operator!=(const ListIterator &other) const;
	ListIterator& operator++(); //prefix ++
	ListIterator operator++(int); // postfix ++
	ListIterator& operator--(); //prefix --
	ListIterator operator--(int); //postfix --

private:
    List *list;
	ListItem *item;

};

#endif // LISTITERATOR_H
#endif // DEBUG_
