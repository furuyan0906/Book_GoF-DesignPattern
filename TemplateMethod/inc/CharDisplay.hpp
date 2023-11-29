#ifndef H__CHAR_DISPLAY__H
#define H__CHAR_DISPLAY__H


#include "AbstractDisplay.hpp"

class CharDisplay : public AbstractDisplay
{
    private:
        char m_ch;

    public:
        CharDisplay( const char ch );
        void open( void );
        void print( void );
        void close( void );
};


#endif /* H__CHAR_DISPLAY__H */