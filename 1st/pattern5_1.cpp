#include<iostream>
using namespace std;

int main(){
    int num,n=5;

    for(int i=1;i<=n;i++)
    {
        num=((i*2)-1);
        for(int j=1;j<=i;j++)
        {
            cout<<num<<"  ";
            num-=2;
        }
        cout<<endl;

    }
    return 0;
}