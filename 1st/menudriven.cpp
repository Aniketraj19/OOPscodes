#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{
    int x,a,c=0,b,temp;
    int d= INT_MAX;
    cout<<"Enter 1 to check whether the no is composite or not"<<endl;
    cout<<"Enter 2 to get the smallest digit of the entered no"<<endl;
    cin>>x;
    switch (x)
    {
        case 1:
        cout<<"enter the no"<<endl;
        cin>>a;
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            c++;
        }
        if(c>=1)
        {
            cout<<"it is a composite no"<<endl;
        }
        else
        {
            cout<<"it is not a composite no "<<endl;
        }
        break;

        case 2:
        cout<<"Enter the no to check the smallest digit "<<endl;
        cin>>b;
        while(b>0)
        {
            temp = b%10;
            b=b/10;
            d= min(d,temp);
        }
        cout<<"the smallest digit of the number is : "<<d;
        break;

        default:
        cout<<"enter valid choice"<<endl;
    }
    return 0;
}