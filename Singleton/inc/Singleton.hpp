#ifndef H__SINGLETON__H
#define H__SINGLETON__H


/* ** *******************************************************
 * Singletonデザインパターンは
 * Singletonクラスがメンバとメンバを制御する公開I/Fを持っていて
 * 効果が生まれる
 * **************************************/
class Singleton
{
    private:
        Singleton();
		Singleton( const Singleton &obj ){}
		Singleton &operator=( const Singleton &obj );
        ~Singleton();

    public:
        /* staticは実体を作る前にcallするため */
        static const Singleton& getInstance( void );
};


#endif /* H__SINGLETON__H */
