#include<iostream>
using namespace std;

int factorial(int a){
    int x=1;
    for(int i=1;i<=a;i++){
        x=x*i; 
    }
   return x;
}

int main(){
    int n,r,nCr;
    cin>>n>>r;
    nCr= factorial(n)/(factorial(r)*factorial(n-r));
    cout<<nCr<<endl;
    
    return 0;
}