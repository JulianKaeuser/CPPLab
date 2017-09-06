#include "ListItem.h"
#ifndef LISTITEM_TPP_
#define LISTITEM_TPP_

template<typename T>
ListItem<T>::ListItem(ListItem *prev, ListItem *next, T content):
previous(prev),
next(next),
content(content)
{
	if (next!=0){
		next->previous = this;
	}
	if (previous!=0){
	    prev->next = this;
	}	
}

template <typename T>	
ListItem<T>::~ListItem(){
	
	}

template <typename T>	
T& ListItem<T>::getContent(){ 
	return content;
	}
template <typename T>
ListItem<T>* ListItem<T>::getNext(){
	return next;
}
template <typename T>
ListItem<T>* ListItem<T>::getPrevious(){
	return previous;
}
	
#endif //LISTITEM_TPP_