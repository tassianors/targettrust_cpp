
#include "vetor.h"

/***********************************************************************/

myVector2::myVector2(int i) : myVector(i)
{
}

/***********************************************************************/

myVector2::myVector2(const myVector2 &v) : myVector(v)
{
}

/***********************************************************************/

myVector2::~myVector2() 
{
}

myVector2 myVector2::operator+(const myVector2 &v)
{
	int size = v.len + this->len;
	myVector2 tmp(size);
	int i;

	for (i = 0; i < size; i++) {
		if (i < this->len) 
			tmp.vet[i] = this->vet[i];
		else
			tmp.vet[i] = v.vet[i-this->len];
	}
	return tmp;
}

