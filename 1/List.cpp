#include "List.h"


List::List()
{
	currentSize = 0;
	first = 0;
	last = 0;
}

List::~List()
{
}

List::List(const List &other){
	
	for (ListItem * ii= other.first; ii!=0; ii=ii->getNext()){
		this->appendElement(ii->getContent());
	}
}


void List::appendElement (int i){
	currentSize++;
	ListItem *it;
	std::cout << last << std::endl;
	it = new ListItem(last, 0, i);
	std::cout << "it:" << it->getContent() << std::endl;
	last = it;
	
	if (first==0){
		first = it;
		last = it;
	}
	std::cout << "last: " <<last << " - " <<last->getContent() << std::endl;
	std::cout << "first:" <<first << " - " <<first->getContent() << std::endl;
}

void List::prependElement(int i){
	currentSize++;
	ListItem *it;
	it = new ListItem(0, this->first,i);
	first = it;
	if (last==0){
		last = it;
		first = it;
	}
}

void List::insertElementAt(int i, size_t pos){
	if(pos == 0){
		prependElement(i);
	}else if(pos >= getSize()){
		appendElement(i);
		
	}else{
		ListItem *it;
		ListItem *nth = getElementAt(pos-1);
		it = new ListItem(nth, nth->getNext(),i);
		if(currentSize==0){
			first = it;
			last = it;
		}
	}
	currentSize++;
	
	
}

size_t List::getSize() const{
	return currentSize;
}

int & List::getNthElement(size_t n){
	if (n==0){
		return getFirst();
	}
	else if (n>=getSize()){
		return getLast();
	}
	return getElementAt(n)->getContent();
}

int & List::getFirst(){
	return first->getContent();
}

int & List::getLast(){
	return last->getContent();
}

int List::deleteFirst(){
	ListItem *nextFirst = first->getNext();
	int cont = first->getContent();
	delete first;
	first = nextFirst;
	currentSize--;
	if (currentSize==0){
		first = 0;
		last  = 0;
	}
	return cont;
}

int List::deleteLast(){
	ListItem *nextLast = last->getPrevious();
	int cont = last->getContent();
	ListItem *toDelete = last;
	delete toDelete;
	last = nextLast;
	//nextlast
	currentSize--;
	if (currentSize==0){
		first = 0;
		last  = 0;
	}
	return cont;
}

int List::deleteAt(size_t pos){
	int cont;
	if (pos == 0){
		deleteFirst();
	}
	else if (pos >= getSize()){
		deleteLast();
	}
	else {
	ListItem *elem = getElementAt(pos);
	 cont = elem->getContent();
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
	return cont;
	
}

ListItem* List::getElementAt(size_t pos){
	
	ListItem *ii=first;
	for (size_t aa = 0; aa!=pos; aa++){
		ii=ii->getNext();
	}
	return ii;
}

std::ostream &operator<<(std::ostream &stream, List &list){

	for (ListItem *ii = list.first; ii!=0; ii=ii->getNext()){
		int c = ii->getContent();
		std::cout << c << std::endl;
	}
	/*
	ListItem *ii = list.first;
	do {
		int c = ii->getContent();
		std::cout << c << std::endl;
		stream << c << " ";
		ii+=sizeof(ListItem);
	} while (ii!=list.last);
	*/
	return stream;
}

ListIterator List::begin(){
	return *(new ListIterator(this, first));
	
}

ListIterator List::end(){
	return *(new ListIterator(this, last));
	
}
