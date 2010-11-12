#include "list.h"
#include <iostream>

void mylist::insert(int v)
{
	mylist aux;

	while (this->elem.next != NULL) {
		this->elem = this->elem.next;
	}
	n.next = &aux.elem;
	n.next->data = v;
}

void mylist::show(void)
{

}

mylist::mylist(void)
{
	
}

mylist::~mylist(void)
{

}

