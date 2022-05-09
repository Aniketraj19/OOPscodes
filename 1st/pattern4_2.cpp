#include<iostream>
using namespace std;

int main(){
    int i,j;
    char ch = 'A';
    for(i =5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}