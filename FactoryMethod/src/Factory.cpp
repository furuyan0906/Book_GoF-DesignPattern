#include <string>
#include "Product.hpp"
#include "Factory.hpp"
using namespace framework;

Product *Factory::create( std::string owner )
{
    Product *p = createProduct( owner );
    registerProduct( p );

    return p;
}