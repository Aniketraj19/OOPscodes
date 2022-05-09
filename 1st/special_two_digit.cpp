#include<iostream>
using namespace std;

int main()
{
    int a,b,x;
    cout<<"Enter two digit number"<<endl;
    cin>>a;
    x= a % 10;
    b= a/10;
    int sum =0;
    sum = b+x;
    int product = 1;
    product = b*x;

    int final = sum + product;

    if(final == a)
    {
        cout<<"special 2-digit number";
    }
    else
    {
        cout<<"not special 2-digit number";
    }
    return 0;
}