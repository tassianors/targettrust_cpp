#ifndef _VETOR_H_
#define _VETOR_H_

#include <iostream>
#include <string>

using namespace std;

/***********************************************************************/

class myVector {
	public:
		myVector(int i);
		myVector(const myVector &v);
		~myVector();

		myVector operator+(const myVector &v);
		myVector &operator=(const myVector &v);
		myVector operator-(const myVector &v);
		myVector operator*(const myVector &v);
		int operator^(const myVector &v);
		myVector operator+(int i);
		myVector operator-(int i);
		myVector operator*(int i);
		bool operator==(const myVector &v);
		int operator[](int i);
		friend istream &operator>>(istream &in, const myVector &v);
		friend ostream &operator<<(ostream &out, const myVector &v);
		/*friend is a type that enables the access to class' private attributes*/

	private:
		int len;
		int *vet;
};




#endif /*_VETOR_H_*/
