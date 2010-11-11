#include <iostream>
#include "pilha.h"

pilha::pilha(void) : pos(0) 
{
	cout << "constructor" << endl;
}

pilha::~pilha() {
	cout << "Destructor" << endl;
}

int pilha::pop(void) 
{
	if (pos == 0) {
		cout << "ERROR: buffer is empty" << endl;	
		return -1;
	}
	cout << "pop: " << buffer[pos-1] << endl;
	pos--;
	buffer[pos]=0;
	return 0;
}
void pilha::push(int val) 
{
	cout << "push: " << val << endl;
	if (pos>=MAX_SIZE) {
		cout << "ERROR: buffer is full\n\r" << endl;
		return;
	}	
	buffer[pos]=val;
	pos++;
	return;
}
int pilha::top(void) {
	cout << "top: " << buffer[pos-1] << endl;
	return 0;
}

