#include<iostream>
using namespace std;

class Time
{
    int hr,min;

    public:
        Time(){}
        Time(int p,int s)
        {
            hr = p;
            min = s;
        }

        void disp()
        {
            cout<<"hr - "<<hr<<endl;
            cout<<"min - "<<min<<endl;
        }

        Time operator +(Time s2);

};

Time Time :: operator +(Time s2)
{
    Time s3;
    s3.hr = hr + s2.hr;
    s3.min = min + s2.min;
    if(s3.min>=60)
    {
        s3.hr++;
        s3.min-=60;
    }
    return s3;
}

int main()
{
    Time t1(45,40);
    Time t2(35,55);
    Time t3;
    t3=t1+t2;
    t3.disp();
}