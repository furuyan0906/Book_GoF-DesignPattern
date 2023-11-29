#ifndef H__ID_CARD_FACTORY__H
#define H__ID_CARD_FACTORY__H


#include <vector>
#include "Factory.hpp"
using namespace framework;

namespace idcard
{
class IDcardFactory : public Factory
{
    private:
        std::vector<Product *> m_owners;
    
    public:
        IDcardFactory(){}
        std::vector<Product *> getOwners( void );

    protected:
        Product *createProduct( std::string owner );
        void registerProduct( Product *product );
};
};


#endif /* H__ID_CARD_FACTORY__H */