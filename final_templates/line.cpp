/***********************************************************************/
#include "line.h"
/***********************************************************************/

template <class T>
line<T>::line(int c, matrix<T> *m): ncol(c), owner(m)
{
	PRINT_INFO;
}

/***********************************************************************/

template <class T>
line<T>::~line(void)
{
	PRINT_INFO;
}

/***********************************************************************/

