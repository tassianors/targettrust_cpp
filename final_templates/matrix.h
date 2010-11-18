#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>
#include <string>
#include "line.h"

using namespace std;
template <class T>
class line;

/***********************************************************************/
template <class T>
class matrix {
	public:
		matrix(int nl, int nc, T null);
		matrix(const matrix<T> &m);
		~matrix();
		
		unsigned int getNLines(void) const;
		unsigned int getNCol(void) const;
		T getNull(void) const;

		line<T> & operator()(int i);
		line<T> & operator[](int i) const;

		matrix<T> operator+(const matrix<T> &m);
		matrix<T> operator-(const matrix<T> &m);
		matrix<T> operator*(const matrix<T> &m);
		
		matrix<T> & operator=(const matrix<T> &m);
		bool operator==(const matrix<T> &m);
		
		friend istream &operator>>(istream &in, matrix<T> &m);
		friend ostream &operator<<(ostream &out, matrix<T> &m);
		void clearLines(void);

	private:
		line<T> **lin;
		unsigned int nlines;
		unsigned int ncol;
		T null;
};

#endif /*_MATRIX_H_*/

