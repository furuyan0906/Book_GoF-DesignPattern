#ifndef H__PRINT_BARNER__H
#define H__PRINT_BARNER__H

#include <string>
#include "Print.hpp"
#include "Barner.hpp"

class PrintBarner : public Print
{
    private:
        Barner m_barner;

    public:
        PrintBarner( const std::string str );
        void printWeak( void );
        void printStrong( void );
};

#endif /* H__PRINT_BARNER__H */