#include  <cstdlib>
#include  "DisplayImpl.hpp"
#include  "Display.hpp"
#include  "CountDisplay.hpp"
#include  "StringDisplayImpl.hpp"


int main(void)
{
	StringDisplayImpl str1("Hello, Japan.");
	StringDisplayImpl str2("Hello, World.");
	StringDisplayImpl str3("Hello, Universe.");

	Display d1(&str1);
	Display d2(&str2);
	CountDisplay d3(&str3);

	d1.display();
	d2.display();
	d3.display();
	d3.multiDisplay(5);

	return EXIT_SUCCESS;
}
