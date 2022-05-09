#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,x=0,y=0,L=0,l1=0,c1=0,c2=0;
    cin>>n;
    int arr[n][2];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2;j++)
        {
        cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        c1+=arr[i][1];
        c2+=arr[i][2];
        if(c1>c2)
        {
            x=x+1;
            l1=c1-c2;
        }
        else{
            y=y+1;
            l1=c2-c1;
        }
        L= max(L,l1);
    }
    if(x>y)
    {
        cout<<"1"<<"  "<<L;
    }
    else
    {
        cout<<"2"<<"  "<<L;
    }
    
    return 0;
}