#include "mytime.h"
#include <iostream>
#include <unistd.h>


int main(void)
{
	mytime time;
	usleep(190);
	cout << time.getUsec() <<endl;
	usleep(1090);
	cout << time.getUsec() <<endl;
	usleep(100);
	cout << time.getUsec() <<endl;
	usleep(900);
	cout << time.getUsec() <<endl;
	cout << time.getMsec() <<endl;
	mytime time2;
	usleep(1090);
	cout << time2.getUsec() <<endl;
	return 0;
}

