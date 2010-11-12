#include "list.h"
#include <iostream>


int main(void)
{
	mylist list;

	list.insert(1);
	list.insert(2);
	list.insert(4);
	list.insert(5);
	list.show();
	list.insert(9);
	list.insert(9);
	list.insert(-2);
	list.show();
	return 0;
}
