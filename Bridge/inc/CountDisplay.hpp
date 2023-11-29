#ifndef  H__COUNT_DISPLAY__H
#define  H__COUNT_DISPLAY__H


#include  "DisplayImpl.hpp"
#include  "Display.hpp"

class CountDisplay : public Display
{
	public:
		CountDisplay(DisplayImpl *impl);
		void multiDisplay(int times);
};


#endif  /* H__COUNT_DISPLAY__H */
