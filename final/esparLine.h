#ifndef _ESPAR_LINE_H_
#define _ESPAR_LINE_H_

#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

struct st_node {
	int position;
	int elem;
	struct st_node *next;
};

/***********************************************************************/

class esparLine: public line {
	public:
		esparLine(int ncol, int i, matrix *m);
		~esparLine();

		int& operator()(int j);
		int operator[](int j);

	private:
		void add(int pos, int val);
		void show(void);

		struct st_node *head;
		int size;
		int lineIndex;

};

#endif /*_ESPAR_LINE_H_*/
