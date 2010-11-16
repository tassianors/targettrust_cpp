
#include "vetor.h"

int main(void)
{
	myVector a(5);
	myVector b(5);

	cin >> a;
	cin >> b;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a == b ? " <<  (a == b) << endl;
	cout << "a[3] = "<< a[3] << endl << "b[2] = " << b[2] << endl;
	cout << "a + 5 = " << a + 5 << endl;
	cout << "b - 10 = " << b - 10 << endl;
	cout << "a * 3 = " << a * 3 << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a . b = " << (a ^ b) << endl;
}


