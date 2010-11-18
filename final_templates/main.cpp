#include "matrix.h"
#include "myexceptions.h"
#include <fstream>


int main(void)
{
	try {
		matrix<int> m(3,3,12);
		matrix<int> m3(3, 3, 0);
		ifstream fin;
		fin.open("val.txt", ios::in);

		fin >> m;
		cout << m;

		matrix<int> *m2 = new matrix<int>(m);
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
	} catch (matrix_excep e) {
		cout << e.what()<<endl;
	}
	return 0;
}


