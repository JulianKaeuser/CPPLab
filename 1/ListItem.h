#ifndef LISTITEM_H
#define LISTITEM_H

#include <iostream>

class ListItem
{
public:
	ListItem(ListItem *prev, ListItem *next, int content);
	
	~ListItem();
	int& getContent();
	ListItem* getNext();
	ListItem* getPrevious();
	
private:
    ListItem(const ListItem &other); // no impl
    ListItem *previous;
	ListItem *next;
    int content;
	ListItem& operator=(const ListItem &other); // no impl

};

#endif // LISTITEM_H
