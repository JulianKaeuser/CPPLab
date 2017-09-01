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
	this->currentSize = other.getSize();
	for (ListItem * ii= other.first; ii!=0; ii+=sizeof(ListItem)){
		this->appendElement(ii->getContent());
	}
}


void List::appendElement (int i){
	currentSize++;
	ListItem *it;
	std::cout << last << std::endl;
	it = new ListItem(0, 0, i);
	last = it;
	if (first==0){
		first = it;
		last = it;
	}
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
	currentSize++;
	ListItem *it;
	ListItem *nth = getElementAt(pos);
	it = new ListItem(nth, nth->getNext(),i);
	if(currentSize==1){
		first = it;
		last = it;
	}
	
}

size_t List::getSize() const{
	return currentSize;
}

int & List::getNthElement(size_t n){
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
	delete last;
	last = nextLast;
	currentSize--;
	if (currentSize==0){
		first = 0;
		last  = 0;
	}
	return cont;
}

int List::deleteAt(size_t pos){
	ListItem *elem = getElementAt(pos);
	int cont = elem->getContent();
	if (elem == last){
		last = elem->getPrevious();
	}
	else if (elem == first){
		first = elem->getNext();
	}
	delete elem;
	currentSize--;
	if (currentSize==0){
		first = 0;
		last  = 0;
	}
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
    stream << "apenis";
	//for (ListItem *ii = list.first; ii!=0; ii+=sizeof(ListItem)){
	//	int c = ii->getContent();
	//	stream << c << " ";
	//}
	return stream;
}
