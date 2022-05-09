#include<iostream>
using namespace std;

void factorial(int a){
    int x=1;
    for(int i=1;i<=a;i++){
        x=x*i;
    }
    cout<<x<<endl;
}

int main(){
    int n;
    cin>>n;
    factorial(n);
    return 0;
}