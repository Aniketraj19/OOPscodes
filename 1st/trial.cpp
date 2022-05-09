#include<iostream>
using namespace std;

int main()
{
    int a,b,x;
    cout<<"Enter two digit number"<<endl;
    cin>>a;
    x= a % 10;
    b= a/10;
    cout<<x<<" and "<<b;
    return 0;
}