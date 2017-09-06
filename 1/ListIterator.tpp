#ifndef LISTITERATOR_TPP_
#define LISTITERATOR_TPP_
#include "ListIterator.h"


template<typename T>
ListIterator<T>::ListIterator(List<T> const *list, ListItem<T> *item):
list(list),
item(item)
{

}

template<typename T>
ListIterator<T>::~ListIterator()
{
}


template<typename T>
T& ListIterator<T>::operator*(){
	return (item->getContent());
}

template<typename T>
bool ListIterator<T>::operator!=(const ListIterator<T> &other) const{
	if ((other.list != list) || (other.item!=item)){
		return 1;
	}
	return 0;
}

template<typename T>
ListIterator<T>& ListIterator<T>::operator ++(){
	if (item==0){
		item = list->first;
	}
	else {
	 item=item->getNext();
	}
	return *this;
}

template<typename T>
ListIterator<T> ListIterator<T>::operator++(int){
	ListIterator<T> iter(list, item); // store current iterator
	if (item ==0){
		item = list->first;
	}
	else {
		item = item->getNext();
	}
	return iter; // return copy to previous item
}

template<typename T>
ListIterator<T>& ListIterator<T>::operator --(){
	if (item==0){
		item = list->last;
	}
	else {
	 item=item->getPrevious();
	}
	return *this;
}

template<typename T>
ListIterator<T> ListIterator<T>::operator--(int){
	ListIterator<T> iter(list, item); //store current iterator
	if (item ==0){
		item = list->last;
	}
	else {
		item = item->getPrevious();
	}
	return iter; // return copy to previous item
}

#endif //LISTITERATOR_TPP_