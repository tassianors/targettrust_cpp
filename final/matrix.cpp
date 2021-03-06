/***********************************************************************/
#include "matrix.h"
#include "esparLine.h"
#include "myexceptions.h"

/***********************************************************************/

matrix::matrix(int nl, int nc, int null): nlines(nc), ncol(nc), null(null)
{
	PRINT_INFO;
	if (nl < 1 || nc < 1)
		throw matrix_excep("number of lines or columns must be positive!!");

	this->lin = new line*[nl];
	for (int i=0; i< this->nlines; i++)
		this->lin[i] = new esparLine(this->ncol, i, this);
}

/***********************************************************************/

matrix::matrix(const matrix &m)
{
	this->nlines = m.getNLines();
	this->ncol = m.getNCol();
	this->null = m.getNull();

	this->lin = new line*[this->getNLines()];
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
matrix::~matrix(void)
{
	for (int i=0; i< this->getNLines(); i++) {
		delete this->lin[i];
	}
}

/***********************************************************************/
unsigned int matrix::getNLines(void)  const
{
	return this->nlines;
}

/***********************************************************************/
unsigned int matrix::getNCol(void) const
{
	return this->ncol;
}

/***********************************************************************/
unsigned int matrix::getNull(void) const
{
	return this->null;
}

/***********************************************************************/
line& matrix::operator()(int i)
{
	PRINT_INFO;
	return *(this->lin[i]);
}

/***********************************************************************/
line& matrix::operator[](int i) const
{
	PRINT_INFO;
	return *(this->lin[i]);
}

/***********************************************************************/
matrix matrix::operator+(const matrix &m)
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
matrix matrix::operator-(const matrix &m)
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
matrix matrix::operator*(const matrix &m)
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
matrix& matrix::operator=(const matrix &m)
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
bool matrix::operator==(const matrix &m)
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
istream& operator>>(istream &in, matrix &m)
{
	int i, j;
	PRINT_INFO;
	for (i = 0; i < m.getNLines(); i++) {
		for (j = 0; j < m.getNCol(); j++) {
			int aux =0;
			in >> aux;
			if (aux != m.getNull())
				m(i)(j) = aux;
		}
	}
	return in;

}

/***********************************************************************/
ostream& operator<<(ostream &out, matrix &m)
{
	int i, j;
	PRINT_INFO;
	for (i = 0; i < m.getNLines(); i++) {
		for (j = 0; j < m.getNCol(); j++) {
			int aux = m[i][j];
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
void matrix::clearLines(void)
{
}

/***********************************************************************/

