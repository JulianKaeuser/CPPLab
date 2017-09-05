#ifndef LISTITEM_H
#define LISTITEM_H

#include <iostream>
template<typename T>
class ListItem
{
public:
	ListItem(ListItem *prev, ListItem *next, T content);
	
	~ListItem();
	T& getContent();
	ListItem* getNext();
	ListItem* getPrevious();
	
private:
    ListItem(const ListItem &other); // no impl
    ListItem *previous;
	ListItem *next;
    T content;
	ListItem& operator=(const ListItem &other); // no impl

};

#include "ListItem.tpp"

#endif // LISTITEM_H
