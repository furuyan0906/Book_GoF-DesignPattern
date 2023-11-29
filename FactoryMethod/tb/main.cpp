#include <vector>
#include <string>
#include <cstdlib>
#include "Factory.hpp"
#include "IDcardFactory.hpp"
using namespace framework;
using namespace idcard;

int main( void )
{
    Factory *factory = new IDcardFactory();

    Product *card1 = factory->create( std::string("Alice") );
    Product *card2 = factory->create( std::string("Bob") );
    Product *card3 = factory->create( std::string("Eve") );

    card1->use();
    card2->use();
    card3->use();

    delete card1;
    delete card2;
    delete card3;

    return EXIT_SUCCESS;
}