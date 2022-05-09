#include<iostream>
using namespace std;
void fibonacci(int a)
{
    int t1=0,t2=1,t3;
    for(int i=1;i<=a;i++){
        t3=t1+t2;
        cout<<t1<<endl;
        t1=t2;
        t2=t3;
    }
}

int main(){
    int endno;
    cin>>endno;

    fibonacci(endno);
    return 0;
}