#include "list.h"
#include <iostream>

void mylist::insert(int v)
{
	struct st_node *aux = new struct st_node;
	struct st_node *aux2;

	aux->data = v;
	//cout << "insert" << v << endl;

	if (this->elem == NULL) {
		this->elem = aux;
		return;
	}
	aux2 = this->elem;
	while (aux2->next != NULL) {
		aux2 = aux2->next;
		//cout << ".";
	}
	//cout << endl;
	aux2->next = aux;
}

void mylist::show(void)
{
	struct st_node *aux;
	aux = this->elem;

	cout << "show: " << endl;
	while (aux != NULL) {
		cout << aux->data << ". ";
		aux = aux->next;
	}
	cout << endl;
}

mylist::mylist(void)
{
	this->elem=NULL;
}

mylist::~mylist(void)
{
	struct st_node *next;
	struct st_node *aux;
	
	aux= this->elem;
	next = this->elem->next;
	while (aux != NULL) {
		cout << "deleting " << aux->data << endl;
		delete (aux);
		aux = NULL;
		aux = next;
		if (aux != NULL)
			next = aux->next;
	}
}

