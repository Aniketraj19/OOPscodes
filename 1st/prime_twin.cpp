#include<iostream>
#include<math.h>
using namespace std;

bool Prime(int n)
{
    for(int i=2;i<= sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int a,b;
    cout<<"enter the no a and b "<<endl;
    cin>>a>>b;
    if(Prime(a) && Prime(b))
    {
        if(b-a == 2)
        {
            cout<<"a and b are Prime Twins";
        }
        else{
            cout<<"a and b are not Prime Twins";
        }
    }
    else
    {
        cout<<"a and b are not Prime Twins";

    }
    return 0;
}