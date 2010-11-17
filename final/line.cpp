/***********************************************************************/
#include "line.h"
/***********************************************************************/

line::line(int c, matrix *m): ncol(c), owner(m)
{
	PRINT_INFO;
}

/***********************************************************************/

line::~line(void)
{
	PRINT_INFO;
}

/***********************************************************************/
