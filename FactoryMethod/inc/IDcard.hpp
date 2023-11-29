#ifndef H__ID_CARD__H
#define H__ID_CARD__H


#include <string>
#include "Product.hpp"

namespace idcard
{
class IDcard : public framework::Product
{
    private:
        std::string m_owner;
    
    public:
        IDcard( const std::string owner );
        void use( void );
        std::string getOwner( void );
};
}; /* namespace = idcard */


#endif /* H__ID_CARD__H */