/***********************************************************************/
#include "matrix.h"
#include "esparLine.h"

/***********************************************************************/

matrix::matrix(int nl, int nc, int null): nlines(nc), ncol(nc), null(null)
{
	PRINT_INFO;
	this->lin = new line*[nl];
	for (int i=0; i< this->nlines; i++)
		this->lin[i] = new esparLine(this->ncol, i, this);
}

/***********************************************************************/

matrix::matrix(const matrix &m)
{
	PRINT_INFO;
	matrix(m.getNLines(), m.getNCol(), m.getNull());

	for (int i = 0; i < m.getNLines(); i++) {
		for (int j = 0; j < m.getNCol(); j++) {
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
line& matrix::operator[](int i)
{
	PRINT_INFO;
	return *(this->lin[i]);
}

/***********************************************************************/
matrix matrix::operator+(const matrix &m)
{
	PRINT_INFO;
}

/***********************************************************************/
matrix matrix::operator-(const matrix &m)
{
	PRINT_INFO;
}

/***********************************************************************/
matrix matrix::operator*(const matrix &m)
{
	PRINT_INFO;
}

/***********************************************************************/
matrix& matrix::operator=(const matrix &m)
{
	PRINT_INFO;
}
/***********************************************************************/
bool matrix::operator==(const matrix &m)
{
	return false;
}

/***********************************************************************/
istream& operator>>(istream &in, matrix &m)
{
	int i, j;
	PRINT_INFO;
	for (i = 0; i < m.getNLines(); i++) {
		for (j = 0; j < m.getNCol(); j++) {
			in >> m(i)(j);
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
			out << m[i][j] << " ";
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

