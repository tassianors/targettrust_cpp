
#include "mystring.h"
#include <iostream>

int main(void)
{
	mystring var;
	
	getline(cin, var);
	//var = "teste de muitos espaços! ! ! !";
	//var.setc('/');
	var.subblanc('%');
	cout << var << endl;
	return 0;
}

