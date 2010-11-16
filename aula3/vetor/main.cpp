
#include "vetor.h"
#include <fstream>

int main(void)
{
	ifstream vin;
	vin.open("val.txt", ios::in);
	myVector2 a(5);
	myVector2 b(5);

	//cin >> a;
	//cin >> b;
	vin >> a;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a == b ? " <<  (a == b) << endl;
	cout << "a[3] = "<< a[3] << endl << "b[2] = " << b[2] << endl;
	cout << "a + 5 = " << a + 5 << endl;
	cout << "b - 10 = " << b - 10 << endl;
	cout << "a * 3 = " << a * 3 << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a ^ b = " << (a ^ b) << endl;

	a(2)=10;
	cout << "new a " << a <<endl;
	vin.close();

}


