#include <cstdlib>
#include "AbstractDisplay.hpp"
#include "CharDisplay.hpp"
#include "StringDisplay.hpp"

int main( void )
{
    AbstractDisplay *p1 = new CharDisplay('H');
    AbstractDisplay *p2 = new StringDisplay( std::string("Hello, world.") );
    AbstractDisplay *p3 = new StringDisplay( std::string("こんにちは。") );

    p1->display();
    p2->display();
    p3->display();

    delete p1;
    delete p2;
    delete p3;

    return EXIT_SUCCESS;
}