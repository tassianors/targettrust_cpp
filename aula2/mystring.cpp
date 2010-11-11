#include <iostream>
#include "mystring.h"

int mystring::counter=0;

mystring::mystring(char *p): string(p)
{
	c = '+';
	cout << "constructor 1" << endl;
	counter++;
	cout << counter << endl;
}

mystring::mystring() : string()
{
	c = '-';
	cout << "constructor 2" << endl;
	counter++;
	cout << mystring::counter <<endl;
}

void mystring::setc(char p)
{
	c = p;
	cout << c << endl;
}

void mystring::subblanc()
{
	int a;
	string aux(1,c);
	while ((a=(int)this->find(' ', a))!=this->npos) {
		this->replace(a, 1, aux);
		a++;
	}
}

void mystring::subblanc(char p)
{
	this->setc(p);
	this->subblanc();
}
