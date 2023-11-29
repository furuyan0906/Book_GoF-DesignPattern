#ifndef H__ABSTRACT_DISPLAY__H
#define H__ABSTRACT_DISPLAY__H


class AbstractDisplay
{
    public:
        virtual ~AbstractDisplay(){}
        void display( void );
        virtual void open( void ) = 0;
        virtual void print( void ) = 0;
        virtual void close( void ) = 0;
};


#endif /* H__ABSTRACT_DISPLAY__H */