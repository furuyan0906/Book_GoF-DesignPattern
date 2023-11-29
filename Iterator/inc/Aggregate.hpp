#ifndef H__AGGREGATE__H
#define H__AGGREGATE__H


#include "Iterator.hpp"

template<typename T>
class Aggregate
{
	public:
		virtual ~Aggregate(){
		}
		virtual Iterator<T>* iterator( void ){
		}
};


#endif /* H__AGGREGATE__H */
