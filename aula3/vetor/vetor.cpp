
#include "vetor.h"

/***********************************************************************/

myVector::myVector(int i)
{
	this->len = i;
	this->vet = new int[i]; /*malloc (i * sizeof(int))*/
}

/***********************************************************************/

myVector::myVector(const myVector &v)
{
	this->vet = new int[v.len];
	this->vet = v.vet;
}

/***********************************************************************/

myVector::~myVector()
{
	delete this->vet;
}
/***********************************************************************/

myVector myVector::operator+(const myVector &v)
{
	myVector tmp(v.len);
	int i;

	for (i = 0; i < v.len; i++)
		tmp.vet[i] = this->vet[i] + v.vet[i];
	
	return tmp;
}

/***********************************************************************/

myVector myVector::operator+(int v)
{
	int i;
	myVector tmp(this->len);

	for (i = 0; i < tmp.len; i++)
		tmp.vet[i] = this->vet[i] + v;
	return tmp;
}
/***********************************************************************/

myVector myVector::operator-(int v)
{
	int i;
	myVector tmp(this->len);

	for (i = 0; i < tmp.len; i++)
		tmp.vet[i] = this->vet[i] - v;
	return tmp;
}
/***********************************************************************/

myVector myVector::operator*(int v)
{
	int i;
	myVector tmp(this->len);

	for (i = 0; i < tmp.len; i++)
		tmp.vet[i] = this->vet[i] * v;
	return tmp;
}
/***********************************************************************/

myVector myVector::operator*(const myVector &v)
{
	int i;
	myVector tmp(this->len);

	for (i = 0; i < tmp.len; i++)
		tmp.vet[i] = this->vet[i] * v.vet[i];
	return tmp;
}
/***********************************************************************/

int myVector::operator^(const myVector &v)
{
	int i;
	int ret = 0;

	for (i = 0; i < v.len; i++)
		ret += this->vet[i] * v.vet[i];
	return ret;
}
/***********************************************************************/

myVector myVector::operator-(const myVector &v)
{
	myVector tmp(v.len);
	int i;

	for (i = 0; i < v.len; i++)
		tmp.vet[i] = this->vet[i] - v.vet[i];

	return tmp;
}

/***********************************************************************/

myVector &myVector::operator=(const myVector &v)
{
	int i;

	for (i = 0; i < v.len; i++)
		this->vet[i] = v.vet[i];

	return *this;
}

/***********************************************************************/

bool myVector::operator==(const myVector &v)
{
	int i;
	bool ret;

	for (i = 0; i < v.len; i++)
		ret = this->vet[i] == v.vet[i];

	return ret;
}

/***********************************************************************/

int myVector::operator[](int i)
{
	return this->vet[i];
}

/***********************************************************************/

istream &operator>>(istream &in, const myVector &v)
{
	int i;

	for (i = 0; i < v.len; i++)
		cin >> v.vet[i];

	return in;
}

/***********************************************************************/

ostream &operator<<(ostream &out, const myVector &v)
{
	int i;

	for (i = 0; i < v.len; i++)
		cout << v.vet[i] << " ";

	return out;
}

/***********************************************************************/


