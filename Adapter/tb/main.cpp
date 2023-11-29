#include "Print.hpp"
#include "PrintBarner.hpp"
#include <cstdlib>

int main( void )
{
    Print *p = new PrintBarner("Hello");
    p->printWeak();
    p->printStrong();

    delete p;

    return EXIT_SUCCESS;
}