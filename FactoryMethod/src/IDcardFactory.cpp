#include <vector>
#include <string>
#include "IDcard.hpp"
#include "IDcardFactory.hpp"
#include "Product.hpp"
using namespace idcard;

std::vector<Product *> IDcardFactory::getOwners( void )
{
    return m_owners;
}

Product *IDcardFactory::createProduct( std::string owner )
{
    return new IDcard( owner );
}

void IDcardFactory::registerProduct( Product *product )
{
    m_owners.push_back( product );
}