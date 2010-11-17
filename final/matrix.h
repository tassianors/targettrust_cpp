#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>
#include <string>
#include "line.h"

using namespace std;
class line;

/***********************************************************************/
class matrix {
	public:
		matrix(int nl, int nc, int null);
		~matrix();
		
		int getNLines(void);
		int getNCol(void);
		int getNull(void);

		line& operator()(int i);
		line& operator[](int i);

		matrix operator+(const matrix &m);
		matrix operator-(const matrix &m);
		matrix operator*(const matrix &m);
		
		matrix& operator=(const matrix &m);
		bool operator==(const matrix &m);
		
		friend istream &operator>>(istream &in, const matrix &m);
		friend ostream &operator<<(ostream &out, const matrix &m);
		void clearLines(void);

	private:
		line **lin;
		unsigned int nlines;
		unsigned int ncol;
		unsigned int null;
};

#endif /*_MATRIX_H_*/

