#include <cstdlib>
#include "Product.hpp"
#include "MessageBox.hpp"
#include "UnderlinePen.hpp"
#include "Manager.hpp"


int main()
{
	Manager manager;
	UnderlinePen upen('~');
	MessageBox mbox1('*');
	MessageBox mbox2('/');

	manager.regist("strong message", static_cast<Product*>(&upen));
	manager.regist("warning box", static_cast<Product*>(&mbox1));
	manager.regist("slash box", static_cast<Product*>(&mbox2));

	Product *p1 = manager.create("strong message");
	p1->use("Hello, world");
	Product *p2 = manager.create("warning box");
	p2->use("Hello, world");
	Product *p3 = manager.create("slash box");
	p3->use("Hello, world");

	return EXIT_SUCCESS;
}
