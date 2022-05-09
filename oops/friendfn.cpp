#include <iostream>
using namespace std;
class usertwo;
class userone
{
private:
    string uname, pID;

public:
    void setdata()
    {
        cout << "Enter the name : \n";
        getline(cin, uname);
        cout << "Enter the previous id : \n";
        getline(cin, pID);
    }
    friend void usercheck(userone u1, usertwo u2);
};

class usertwo
{
private:
    string uname, ID;

public:
    void setdata()
    {
        cout << "Enter the name : \n";
        getline(cin, uname);
        cout << "Enter the previous id : \n";
        getline(cin, ID);
    }
    friend void usercheck(userone u1, usertwo u2);
};

void usercheck(userone u1, usertwo u2)
{
    if ((u1.uname.compare(u2.uname)) == 0)
    {
        if ((u1.pID.compare(u2.ID)) == 0)
        {
            cout << "they are equal" << endl;
        }
    }
    else
        cout << "they are not equal" << endl;
}

int main()
{
    userone u1;
    usertwo u2;
    u1.setdata();
    u2.setdata();
    usercheck(u1, u2);
    return 0;
}