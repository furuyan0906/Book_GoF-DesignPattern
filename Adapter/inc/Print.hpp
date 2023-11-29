#ifndef H__PRINT__H
#define H__PRINT__H

class Print
{
    public:
        virtual ~Print(){}
        virtual void printWeak( void ) = 0;
        virtual void printStrong( void ) = 0;
};

#endif /* H__PRINT__H */