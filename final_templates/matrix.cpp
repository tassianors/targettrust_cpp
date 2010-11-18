/***********************************************************************/
#include "matrix.h"
#include "esparLine.h"
#include "myexceptions.h"

/***********************************************************************/

matrix<T>::matrix(int nl, int nc, T null): nlines(nc), ncol(nc), null(null)
{
	PRINT_INFO;
	if (nl < 1 || nc < 1)
		throw matrix_excep("number of lines or columns must be positive!!");

	this->lin = new line<T>*[nl];
	for (int i=0; i< this->nlines; i++)
		this->lin[i] = new esparLine(this->ncol, i, this);
}

/***********************************************************************/

matrix<T>::matrix(const matrix<T> &m)
{
	this->nlines = m.getNLines();
	this->ncol = m.getNCol();
	this->null = m.getNull();

	this->lin = new line<T>*[this->getNLines()];
	for (int i=0; i< this->nlines; i++)
		this->lin[i] = new esparLine(this->ncol, i, this);

	for (int i = 0; i < m.getNLines(); i++) {
		for (int j = 0; j < m.getNCol(); j++) {
			if (m[i][j] != m.getNull())
				(*this)(i)(j) = m[i][j];
		}
	}
}
/***********************************************************************/
matrix<T>::~matrix(void)
{
	for (int i=0; i< this->getNLines(); i++) {
		delete this->lin[i];
	}
}

/***********************************************************************/
unsigned int matrix<T>::getNLines(void)  const
{
	return this->nlines;
}

/***********************************************************************/
unsigned int matrix<T>::getNCol(void) const
{
	return this->ncol;
}

/***********************************************************************/
T matrix<T>::getNull(void) const
{
	return this->null;
}

/***********************************************************************/
line<T> & matrix<T>::operator()(int i)
{
	PRINT_INFO;
	return *(this->lin[i]);
}

/***********************************************************************/
line<T> & matrix<T>::operator[](int i) const
{
	PRINT_INFO;
	return *(this->lin[i]);
}

/***********************************************************************/
matrix<T> matrix<T>::operator+(const matrix<T> &m)
{
	PRINT_INFO;
	for (int i = 0; i < m.getNLines(); i++) {
		for (int j = 0; j < m.getNCol(); j++) {
			(*this)(i)(j) += m[i][j];
		}
	}
	return *this;
}

/***********************************************************************/
matrix<T> matrix<T>::operator-(const matrix<T> &m)
{
	PRINT_INFO;
	for (int i = 0; i < m.getNLines(); i++) {
		for (int j = 0; j < m.getNCol(); j++) {
			(*this)(i)(j) -= m[i][j];
		}
	}
	return *this;
}

/***********************************************************************/
matrix<T> matrix<T>::operator*(const matrix<T> &m)
{
	PRINT_INFO;
	for (int i = 0; i < m.getNLines(); i++) {
		for (int j = 0; j < m.getNCol(); j++) {
			(*this)(i)(j) *= m[i][j];
		}
	}
	return *this;
}

/***********************************************************************/
matrix<T> & matrix<T>::operator=(const matrix<T> &m)
{
	PRINT_INFO;
	for (int i = 0; i < m.getNLines(); i++) {
		for (int j = 0; j < m.getNCol(); j++) {
			(*this)(i)(j) = m[i][j];
		}
	}
	return *this;
}
/***********************************************************************/
bool matrix<T>::operator==(const matrix<T> &m)
{
	for (int i = 0; i < m.getNLines(); i++) {
		for (int j = 0; j < m.getNCol(); j++) {
			if ((*this)[i][j] != m[i][j])
				return false;
		}
	}
	return true;
}

/***********************************************************************/
istream& operator>>(istream &in, matrix<T> &m)
{
	int i, j;
	PRINT_INFO;
	for (i = 0; i < m.getNLines(); i++) {
		for (j = 0; j < m.getNCol(); j++) {
			T aux =0;
			in >> aux;
			if (aux != m.getNull())
				m(i)(j) = aux;
		}
	}
	return in;

}

/***********************************************************************/
ostream& operator<<(ostream &out, matrix<T> &m)
{
	int i, j;
	PRINT_INFO;
	for (i = 0; i < m.getNLines(); i++) {
		for (j = 0; j < m.getNCol(); j++) {
			T aux = m[i][j];
			if (aux == m.getNull())
				out << "-" << " ";
			else 
				out << aux << " ";
		}
		out << endl;
	}
	return out;
}

/***********************************************************************/
void matrix<T>::clearLines(void)
{
}

/***********************************************************************/

