#include<iostream>
using namespace std;
class Raj2;
class Raj1
{
    private:
    int access1;
    public:
    Raj1(){}
    Raj1(int a)
    {
        access1 = a;
    }
    void setData()
    {
        cout<<"Hello world"<<endl;
    }
    friend void sum(Raj1 obj1,Raj2 obj2);
};

class Raj2
{
    private:
    int access2;
    public:
    Raj2(){}
    Raj2(int b)
    {
        access2 = b;
    }
    void setdata()
    {
        cout<<"hello world from Raj2"<<endl;
    }
    friend void sum(Raj1 obj1,Raj2 obj2);
};

void sum(Raj1 obj1,Raj2 obj2)
{
    int sum = 0;
    sum = obj1.access1 + obj2.access2;
    cout<<"The sum of both the class is - "<<sum<<endl;
}

int main()
{
    Raj1 obj1(51);
    Raj2 obj2(55);
    sum(obj1,obj2);
    return 0;
}