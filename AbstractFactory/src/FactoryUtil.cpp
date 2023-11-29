#include  <iostream>
#include  <string>
#include  <memory>
#include  <map>
#include  <exception>
#include  <stdexcept>

#include  <factory/Item.hpp>
#include  <factory/Link.hpp>
#include  <factory/Tray.hpp>
#include  <factory/Page.hpp>
#include  <factory/Factory.hpp>
#include  <listfactory/ListLink.hpp>
#include  <listfactory/ListTray.hpp>
#include  <listfactory/ListPage.hpp>
#include  <listfactory/ListFactory.hpp>

#include  <factory/FactoryUtil.hpp>


// staticメンバ変数の実態を作る
std::map<std::string, Factory*> FactoryUtil::m_factories;

Factory* FactoryUtil::getInstance(std::string classname)
{
	Factory *factory = nullptr;

	if(classname == "ListFactory") {
		if(m_factories.find(classname) == m_factories.end()) 
			m_factories[classname] = static_cast<Factory *>( new ListFactory() );

		factory = m_factories[classname];
	}
	else
		throw "unknown class is specified.";

	return factory;
}

