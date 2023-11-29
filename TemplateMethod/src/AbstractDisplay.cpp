#include "AbstractDisplay.hpp"

void AbstractDisplay::display( void )
{
    this->open();
    for( int i = 0; i < 5; i++ ){
        print();
    }
    close();
}