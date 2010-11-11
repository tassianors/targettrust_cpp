#include "pilha.h"

int main(void) {
	pilha *obj = new pilha;
	pilha obj2;

	obj->push(1);
	obj->push(2);
	obj->push(3);
	obj->push(4);
	obj->push(5);
	obj->push(6);
	obj->push(7);
	obj->push(8);

	obj->pop();
	obj->pop();
	obj->pop();
	obj->pop();
	obj->top();
	obj->top();
	obj->top();
	obj->pop();
	obj->pop();
	obj->pop();
	obj->pop();
	obj->pop();
	obj->pop();	
	obj->pop();
	delete obj;

	return 0;
}
