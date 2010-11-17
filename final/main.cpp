#include "matrix.h"
#include <fstream>


int main(void)
{
	matrix m(3,3,255);

	ifstream fin;
	fin.open("val.txt", ios::in);

	fin >> m;
	cout << m;
//	matrix *m2 = new matrix(m);
//	cout << m2;
	fin.close();
	return 0;
}


