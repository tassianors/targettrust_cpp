#ifndef _LINE_H_
#define _LINE_H_

#include <iostream>
#include <string>
#define PRINT_INFO		0//cout << __FILE__<< "::" << __LINE__ << "::" << __FUNCTION__ << endl

using namespace std;

/***********************************************************************/
template <class T>
class matrix;

template <class T>
class line {
	public:
		line(int c, matrix<T> *m);
		virtual ~line() = 0;
		virtual T& operator()(int j) = 0;
		virtual T operator[](int j) const = 0;
	protected:
		int ncol;
		matrix<T>  *owner;
};

#endif /*_LINE_H_*/

