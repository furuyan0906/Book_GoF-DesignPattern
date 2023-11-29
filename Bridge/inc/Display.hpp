#ifndef  H__DISPLAY__H
#define  H__DISPLAY__H


#include  "DisplayImpl.hpp"

class Display
{
	private:
		DisplayImpl *m_impl;

	public:
		Display(DisplayImpl *impl);
		void open(void);
		void print(void);
		void close(void);
		virtual void display(void) final;
};


#endif  /* H__DISPLAY__H */
