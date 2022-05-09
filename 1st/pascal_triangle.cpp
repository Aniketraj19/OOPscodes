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
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<factorial(i)/(factorial(j)*factorial(i-j))<<"  ";
        }
    cout<<endl;
    }
}