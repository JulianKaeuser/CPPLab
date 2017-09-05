#include "List.h"
#ifndef LIST_TPP_
#define LIST_TPP_

template<typename T>
List<T>::List(){
	currentSize = 0;
	first = 0;
	last = 0;
}

template<typename T>
List<T>::~List(){
	
}
	
template<typename T>
List<T>::List(const List &other){
		for (ListItem<T> * ii= other.first; ii!=0; ii=ii->getNext()){
		this->appendElement(ii->getContent());
	}
}

template<typename T>
void List<T>::appendElement (const T &i){
	currentSize++;
	ListItem<T> *it;
	std::cout << last << std::endl;
	it = new ListItem<T>(last, 0, i);
	std::cout << "it:" << it->getContent() << std::endl;
	last = it;
	
	if (first==0){
		first = it;
		last = it;
	}
	std::cout << "last: " <<last << " - " <<last->getContent() << std::endl;
	std::cout << "first:" <<first << " - " <<first->getContent() << std::endl;

}

template<typename T>
void List<T>::prependElement(const T &i){
	currentSize++;
	ListItem<T> *it;
	it = new ListItem<T>(0, this->first,i);
	first = it;
	if (last==0){
		last = it;
		first = it;
	}
}

template<typename T>	
void List<T>::insertElementAt(const T &i, const size_t pos) {
	if(pos == 0){
		prependElement(i);
	}else if(pos == getSize()){
		appendElement(i);
		
	}
	else if (pos>getSize()){
		char* what = "Position pos greater than list size";
		throw std::out_of_range(what);
	}else{
		ListItem<T> *it;
		ListItem<T> *nth = getElementAt(pos-1);
		it = new ListItem<T>(nth, nth->getNext(),i);
		if(currentSize==0){
			first = it;
			last = it;
		}
	}
	currentSize++;
}

template<typename T>	
size_t List<T>::getSize() const{
	return currentSize;}
	
template<typename T>	
T & List<T>::getNthElement(const size_t n) const {
	if (n==0){
		return getFirst();
	}
	else if (n==getSize()){
		return getLast();
	}
	else if (n>getSize()){
		char* what = "Index n is greater than List size";
		throw std::out_of_range(what);
	}
	return getElementAt(n)->getContent();
	}
	
template<typename T>	
T & List<T>::getFirst() const {
	return first->getContent();
	}
	
template<typename T>	
T & List<T>::getLast() const{
	return last->getContent();
	}

template<typename T>	
void List<T>::deleteFirst(){
	ListItem<T> *nextFirst = first->getNext();
	delete first;
	first = nextFirst;
	currentSize--;
	if (currentSize==0){
		first = 0;
		last  = 0;
	}
	}

template<typename T>	
void List<T>::deleteLast(){
	ListItem<T> *nextLast = last->getPrevious();
	ListItem<T> *toDelete = last;
	delete toDelete;
	last = nextLast;
	//nextlast
	currentSize--;
	if (currentSize==0){
		first = 0;
		last  = 0;
	}
}

template<typename T>	
void List<T>::deleteAt(const size_t pos){
		if (pos == 0){
		deleteFirst();
	}
	else if (pos == getSize()){
		deleteLast();
	}
	else if (pos>getSize()){
		char* what = "Index pos greater than list size";
		throw std::out_of_range(what);
	}
	else {
	ListItem<T> *elem = getElementAt(pos);
	if (elem == last){
		last = elem->getPrevious();
	}
	else if (elem == first){
		first = elem->getNext();
	}
	delete elem;
	
	if (currentSize==1){
		first = 0;
		last  = 0;
	}
	}
	currentSize--;
}

/*
template<typename T>	
ListIterator List<T>::begin(){}
template<typename T>	
ListIterator List<T>::end(){}
*/	
#endif // LIST_TPP_