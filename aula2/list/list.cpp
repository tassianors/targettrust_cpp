#include "list.h"
#include <iostream>

void mylist::insert(int v)
{
	struct st_node *aux = new struct st_node;
	struct st_node *aux2;

	aux->data = v;
	cout << "insert" << endl;

	if (this->elem == NULL) {
		this->elem = aux;
		this->head = aux;
		cout << "first element filled" << endl;
		return;
	}

	while (this->elem->next != NULL) {
		this->elem = this->elem->next;
		cout << "looking for" << endl;
	}
	
	cout << "found the last" << endl;
	this->elem->next = aux;
}

void mylist::show(void)
{
	cout << this->elem->data << endl;
}

mylist::mylist(void)
{
	this->elem=NULL;
}

mylist::~mylist(void)
{

}

