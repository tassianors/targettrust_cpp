#include "matrix.h"
#include <fstream>


int main(void)
{
	matrix m(3,3,255);
	matrix m3(3, 3, 255);

	ifstream fin;
	fin.open("val.txt", ios::in);

	fin >> m;
	cout << m;
	
	matrix *m2 = new matrix(m);
	cout << "---m2---"<<endl;
	cout << *m2;

	cout << (m==*m2) <<endl;
	(*m2)(1)(2) = 11;
	cout << (m==*m2) <<endl;
	

	cout << "---soma m+m2---"<<endl;
	m3 = m+*m2;
	cout << m3;


	fin.close();
	delete m2;
	return 0;
}


