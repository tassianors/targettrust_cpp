/***********************************************************************/
#include "normalLine.h"
/***********************************************************************/

normalLine::normalLine(int ncol, matrix *m): line(ncol, m)
{
	cout << __LINE__ << ":: " << __FUNCTION__ << endl;
	this->elem = new int(ncol);
}

/***********************************************************************/

normalLine::~normalLine(void)
{
	cout << __LINE__ << ":: " << __FUNCTION__ << endl;
	delete this->elem;
}

/***********************************************************************/
int& normalLine::operator()(int j)
{
	cout << __LINE__ << ":: " << __FUNCTION__ << endl;
	return *(this->elem);
}
/***********************************************************************/
int normalLine::operator[](int j)
{
	cout << __LINE__ << ":: " << __FUNCTION__ << endl;
	return 0;
}
/***********************************************************************/
