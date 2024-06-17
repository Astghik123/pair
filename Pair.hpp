
#ifndef __Pair__
#define __Pair__
#include <iostream>
template <typename T,typename U>
class Pair
{
public:
    T T1;
    U T2;
public:
    Pair(T AT1=0, U AT2=0)
        :T1(AT1)
        ,T2(AT2)
    {
                
    }
    bool operator==(Pair Aa)
    {
        if(Aa.T1 == this->T1 & Aa.T2 == this->T2)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    void Swap (Pair &Aa)
    {            
        T tmp = this->T1;
        this->T1 = Aa.T1;
        Aa.T1 = tmp;
        U tmp1 = this->T2;
        this->T2 = Aa.T2;
        Aa.T2 = tmp1;
    }
           
};
template <typename T,typename U>
std::ostream& operator<<(std::ostream& AOut, Pair<T,U> & APeir)
{
    AOut      << APeir.T1 << " "           
              << APeir.T2 << " ";

    return AOut;
}
#endif