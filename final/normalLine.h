#ifndef _NORMAL_LINE_H_
#define _NORMAL_LINE_H_

#include <iostream>
#include <string>
#include "line.h"

using namespace std;

/***********************************************************************/

class normalLine: public line {
	public:
		normalLine(int ncol, matrix *m);
		~normalLine();

		int& operator()(int j);
		int operator[](int j);
	private:
		int *elem;
};

#endif /*_NORMAL_LINE_H_*/

