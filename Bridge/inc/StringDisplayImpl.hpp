#ifndef  H__STRING_DISPLAY_IMPL__H
#define  H__STRING_DISPLAY_IMPL__H


#include  <iostream>
#include  <string>
#include  "DisplayImpl.hpp"

class StringDisplayImpl : public DisplayImpl
{
	private:
		std::string m_str;
		int m_width;
		void printLine(void);

	public:
		StringDisplayImpl(std::string str);
		void rawOpen(void);
		void rawPrint(void);
		void rawClose(void);
};


#endif  /* H__STRING_DISPLAY_IMPL__H */
