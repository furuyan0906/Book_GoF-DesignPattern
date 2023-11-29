#include  <iostream>
#include  <cstdlib>
#include  <factory/Item.hpp>
#include  <factory/Link.hpp>
#include  <factory/Tray.hpp>
#include  <factory/Page.hpp>
#include  <factory/Factory.hpp>
#include  <factory/FactoryUtil.hpp>


int main(int argc, char **argv)
{
	if(argc == 1){
		std::cout << "Usage: Main Program of Concretefactory->" << std::endl;
		std::cout << "Example 1: Main ListFactory" << std::endl;
		std::cout << "Example 2: Main TableFactory" << std::endl;

		return EXIT_FAILURE;
	}

	Factory *factory = Factory::getFactory(argv[1]);

	Link *asahi = factory->createLink("朝日新聞", "http://www.asahi.com/");
	Link *yomiuri = factory->createLink("読売新聞", "http://www.yomiuri.co.jp/");

	Link *usYahoo = factory->createLink("Yahoo!", "http://www.yahoo.com/");
	Link *jpYahoo = factory->createLink("Yahoo!Japan", "http://www.yahoo.co.jp/");
	Link *excite = factory->createLink("Excite", "http://www.excite.com/");
	Link *google = factory->createLink("Google", "http://www.google.com/");

	Tray *traynews = factory->createTray("新聞");
	traynews->add(asahi);
	traynews->add(yomiuri);

	Tray *trayyahoo = factory->createTray("Yahoo!");
	trayyahoo->add(usYahoo);
	trayyahoo->add(jpYahoo);

	Tray *traysearch = factory->createTray("サーチエンジン");
	traysearch->add(trayyahoo);
	traysearch->add(excite);
	traysearch->add(google);

	Page *page = factory->createPage("LinkPage", "John Smith");
	page->add(traynews);
	page->add(traysearch);
	page->output();

	return EXIT_SUCCESS;
}

