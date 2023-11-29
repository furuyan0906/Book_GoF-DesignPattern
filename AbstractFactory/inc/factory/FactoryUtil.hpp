#ifndef  H__FACTORY_UTIL__H
#define  H__FACTORY_UTIL__H

#include  <map>
#include  <memory>
#include  <string>
#include  <factory/Factory.hpp>

// Factoryクラスのサブクラスのポインタを返す
// 例外が発生した場合はこの関数内で投げる, catchは使用側
class FactoryUtil
{
	private:
		static std::map<std::string, Factory*> m_factories;
	public:
		static Factory* getInstance(std::string classname);
};

#endif  /* H__FACTORY_UTIL__H */
