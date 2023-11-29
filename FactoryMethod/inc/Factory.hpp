#ifndef H__FACTORY__H
#define H__FACTORY__H

#include <string>
#include "Product.hpp"

namespace framework
{
class Factory
{
    public:
        virtual ~Factory(){}
        Product *create( std::string owner );
    
    protected:
        virtual Product *createProduct( std::string owner ) = 0;
        virtual void registerProduct( Product *product ) = 0;
};
}; /* namespace = framework */


#endif /* H__FACTORY__H */