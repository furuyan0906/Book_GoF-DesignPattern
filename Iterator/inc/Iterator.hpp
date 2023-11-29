#ifndef H__ITERATOR__H
#define H__ITERATOR__H

#include <iostream>

template<typename T>
class Iterator
{
	public:
		virtual ~Iterator(){
		}
		virtual bool hasNext( void ){
			return false;
		}
		virtual T is( void ){
			return static_cast<T>(nullptr);
		}
		virtual void next( void ){
		}
};


#endif /* H__ITERATOR__H */
