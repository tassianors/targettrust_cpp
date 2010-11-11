#include <sys/time.h>

using namespace std;

class mytime {
	private:
		struct timeval usec;
	public:
		time_t getMsec(void);
		time_t getUsec(void);
		time_t getsec(void);
		mytime(void);
};
