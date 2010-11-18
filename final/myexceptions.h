#ifndef _MYEXCEPTIONS_H_
#define _MYEXCEPTIONS_H_

#include <exception>
#include <string>

using namespace std;

/***********************************************************************/

class matrix_excep: public exception {
	public:
		matrix_excep(const char *s) {
			m=s;
		};
		const char* what(void) {
			return m;
		};
	private:
		const char *m;
};
#endif /*_MYEXCEPTIONS_H_*/
