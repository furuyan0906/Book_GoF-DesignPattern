#ifndef H__STRING_DISPLAY__H
#define H__STRING_DISPLAY__H


#include <string>
#include "AbstractDisplay.hpp"

class StringDisplay : public AbstractDisplay
{
    private:
        std::string m_str;
        void println( void );

    public:
        StringDisplay( const std::string str );
        void open( void );
        void print( void );
        void close( void );
};


#endif /* H__STRING_DISPLAY__H */