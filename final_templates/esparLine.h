#ifndef _ESPAR_LINE_H_
#define _ESPAR_LINE_H_

#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;
template <class T>
struct st_node {
	int position;
	T elem;
	struct st_node<T> *next;
};

/***********************************************************************/
template <class T>
class esparLine: public line<T> {
	public:
		esparLine(int ncol, int i, matrix<T> *m);
		~esparLine();

		T& operator()(int j);
		T operator[](int j) const;

	private:
		T& add(int pos, T val);
		void show(void);

		struct st_node<T> *head;
		int size;
		int lineIndex;

};

#endif /*_ESPAR_LINE_H_*/
