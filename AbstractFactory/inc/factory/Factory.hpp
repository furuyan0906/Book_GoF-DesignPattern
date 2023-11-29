#ifndef  H__FACTORY__H
#define  H__FACTORY__H

#include  <string>
#include  <factory/Item.hpp>
#include  <factory/Link.hpp>
#include  <factory/Tray.hpp>
#include  <factory/Page.hpp>

class Factory
{
	private:
	public:
	/* 部品(classnameを生産する工場(Factory)のインスタンスは1個だけ */
		Factory();
		~Factory(){}
    	static Factory* getFactory(std::string classname);
    	virtual Link* createLink(std::string caption, std::string url) = 0;
    	virtual Tray* createTray(std::string caption) = 0;
    	virtual Page* createPage(std::string titile, std::string author) = 0;
};


#endif  /* H__FACTORY__H */
