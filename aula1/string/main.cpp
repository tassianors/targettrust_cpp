#include <iostream>
#include <string>

using namespace std;

static int ex1(void)
{
	string var, aux;
	int a;
	while (1) {
		getline (cin,var);
		a = var.find("exit");
		if (a != -1) {
			cout << "achou exit" << endl;
			break;	
		} else {
			aux = aux + var;	
		}	
	}
	cout << aux << endl;

	for (a=0; a<aux.length(); a++)
		aux.replace(a,1,"*");

	cout << aux << endl;
}

static void ex2 (void)
{
	string var, aux;
	int j=0;
	
	getline(cin, var);
	j=var.length()-1;
	for (int i=0; i < var.length(); i++) {
		aux.append(var,j,1);
		j--;
	}	
	if ((int)var.find(aux) != -1)
		cout << "palindrome" << endl;
	else 
		cout << "not palindrome" << endl;
	
}

int main(void) 
{
	//ex1();	
	ex2();	
	return 0;
}
