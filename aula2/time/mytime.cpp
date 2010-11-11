#include <iostream>
#include "mytime.h"

static void getNow(struct timeval *time)
{
	gettimeofday(time, NULL);
}

mytime::mytime()
{
	cout << "constructor" << endl;
	gettimeofday(&usec, NULL);
	//cout << usec.tv_sec << " - " << usec.tv_usec << endl;

}

time_t mytime::getMsec(void)
{
	return getUsec()/1000;
}


time_t mytime::getUsec(void)
{
	struct timeval time;
	getNow(&time);
	return (time.tv_usec - usec.tv_usec);
}

time_t mytime::getsec(void)
{
	struct timeval time;
	getNow(&time);
	return time.tv_sec;
}

