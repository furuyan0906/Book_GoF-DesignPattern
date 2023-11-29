#ifndef  H__DIRECTOR__H
#define  H__DIRECTOR__H

#include  "Builder.hpp"

class Director
{
	private:
		Builder *m_builder;

	public:
		Director(Builder *);
		void constructor(void);
};


#endif  /* H__DIRECTOR__H */
