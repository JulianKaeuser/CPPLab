#include "ListIterator.h"
#include "List.h"
#include "ListItem.h"

ListIterator::ListIterator(List *list, ListItem *item):
list(list),
item(item)
{

}

ListIterator::~ListIterator()
{
}

int& ListIterator::operator*(){
	return (item->getContent());
}

bool ListIterator::operator!=(const ListIterator &other) const{
	if ((other.list != list) || (other.item!=item)){
		return 1;
	}
	return 0;
}

ListIterator& ListIterator::operator ++(){
	if (item==0){
		item = list->first;
	}
	else {
	 item=item->getNext();
	}
	return *this;
}

ListIterator ListIterator::operator++(int){
	ListIterator iter(list, item); // store current iterator
	if (item ==0){
		item = list->first;
	}
	else {
		item = item->getNext();
	}
	return iter; // return copy to previous item
}

ListIterator& ListIterator::operator --(){
	if (item==0){
		item = list->last;
	}
	else {
	 item=item->getPrevious();
	}
	return *this;
}

ListIterator ListIterator::operator--(int){
	ListIterator iter(list, item); //store current iterator
	if (item ==0){
		item = list->last;
	}
	else {
		item = item->getPrevious();
	}
	return iter; // return copy to previous item
}
