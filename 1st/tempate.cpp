#include <iostream>
using namespace std;

template <class T>
class Arithematic
{
private:
    T a;
    T b;

public:
    Arithematic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithematic<T>::Arithematic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithematic<T> :: add()
{
    T c = a+b;
    return c;
}
template<class T>
T Arithematic<T> :: sub()
{
    T c = a-b;
    return c;
}

int main()
{
    Arithematic<float> ar(10.56,5.66);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;
    return 0;
}
