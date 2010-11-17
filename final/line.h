#ifndef _LINE_H_
#define _LINE_H_

#include <iostream>
#include <string>
//#include "matrix.h"

using namespace std;

/***********************************************************************/
class matrix;

class line {
	public:
		line(int c, matrix *m);
		virtual ~line() = 0;
		virtual int& operator()(int j) = 0;
		virtual int operator[](int j) = 0;

	private:
		int ncol;
		matrix  *owner;
};

#endif /*_LINE_H_*/

