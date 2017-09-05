#include "ListItem.h"

#ifndef LISTITEM_TPP_

ListItem::ListItem(ListItem* prev, ListItem* next, int content):
content(content),
previous(prev),
next(next)
{
	if (next!=0){
		next->previous = this;
	}
	if (previous!=0){
	    prev->next = this;
	}
	
}


ListItem::~ListItem()
{
	if (previous !=0){
	  previous->next = next;
	}
	
	if (next!=0){
	  next->previous = previous;
	}
	std::cout << "deconstructing ListItem with content"
	          << content << std::endl;
}

int& ListItem::getContent(){
	return content;
}

ListItem* ListItem::getNext(){
	return this->next;
}

ListItem* ListItem::getPrevious(){
	return this->previous;
}

#endif //LISTITEM_TPP