#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int roll, s1, s2, s3;
    float percentage;

public:
    void Studentinfo()
    {
        cout << "Enter your Name : " << endl;
        getline(cin, name);
        cout << "Enter your Roll Number : " << endl;
        cin >> roll;
        cout << "Enter the marks of 1st subject : " << endl;
        cin >> s1;
        cout << "Enter the marks of 2nd subject : " << endl;
        cin >> s2;
        cout << "Enter the marks of 3rd subject : " << endl;
        cin >> s3;
    };
    void CalcPercentage(void);
    void DisplayInfo(void);
};

void Student ::CalcPercentage()
{
    percentage = (s1 + s2 + s3) / 3;
}

void Student ::DisplayInfo()
{
    cout << "Name of Student - " << name << endl;
    cout << "Roll number of the Student - " << roll << endl;
    cout << "Marks in the three subjects are - " << endl
         << s1 << endl
         << s2 << endl
         << s3 << endl;
    cout << "Percentage acquired - " << percentage << endl;
    if (percentage < 40)
    {
        cout << "Grade F" << endl;
    }
    else if (percentage >= 40 && percentage < 60)
    {
        cout << "Grade D" << endl;
    }
    else if (percentage >= 60 && percentage < 80)
    {
        cout << "Grade C" << endl;
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "Grade B" << endl;
    }
    else if (percentage >= 90)
    {
        cout << "Grade A" << endl;
    }
    else
    {
        cout << "Enter valid Marks" << endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of students : \n";
    cin>>n;
    Student A[100];
    for(int i =0;i<n;i++)
    {
        A[i].Studentinfo();
    }
    for(int i =0;i<n;i++)
    {
        A[i].CalcPercentage();
    }
    for(int i =0;i<n;i++)
    {
        A[i].DisplayInfo();
    }
    return 0;
}