#include<iostream>
using namespace std;

class Oppover
{
    private:
    int a1,a2;
    public:
    Oppover(){}
    Oppover(int a,int b)
    {
        a1 = a;
        a2=b;
    }

    void display()
    {
        cout<<"The operatioal value of x is - "<<a1<<endl;
        cout<<"The operatioal value of x is - "<<a2<<endl;
    }

    Oppover operator +(Oppover z)
    {
        Oppover a3;
        a3.a1 = a1 - z.a1;
        a3.a2 = a2 * z.a2;
        return a3;

    }
};

int main()
{
    Oppover obj1(30,20);
    Oppover obj2(15,10);
    Oppover a3;
    a3 = obj1 + obj2;
    a3.display();

}