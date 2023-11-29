#include  <iostream>
#include  <string>
#include  <map>
#include  <exception>
#include  <factory/Item.hpp>
#include  <factory/Link.hpp>
#include  <factory/Tray.hpp>
#include  <factory/Page.hpp>
#include  <factory/Factory.hpp>
#include  <factory/FactoryUtil.hpp>  // for getInstance()

Factory::Factory()
{
}

Factory* Factory::getFactory(std::string classname)
{
	Factory *factory = nullptr;

    try{
		// JavaでのClass.forName(classname).getInstance()みたいな事がしたかった
		// 例外が発生した場合はgetInstanace()内で投げられる
		factory = FactoryUtil::getInstance(classname);
    }
    catch(const std::exception &e){
    	std::cout << e.what() << std::endl;
    }

	return factory;
}

