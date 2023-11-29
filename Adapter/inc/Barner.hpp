#ifndef H__BARNER__H
#define H__BARNER__H


#include <string>

class Barner
{
    private:
        std::string m_str;

    public:
        Barner( const std::string str );
        void showWithParen( void );
        void showWithAster( void );
};

#endif /* H__BARNER__H */
