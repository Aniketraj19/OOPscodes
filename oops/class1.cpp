#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string pan, name;
    int taxincome;
    float tax;

public:
    void InputInfo(void);
    void TaxCalc(void);
    void DisplayInfo(void);
};

void Employee ::InputInfo()
{
    cout << "Enter your pan no : " << endl;
    getline(cin, pan);
    cout << "Enter your name : " << endl;
    getline(cin, name);
    cout << "Enter your Annual Tax Income : " << endl;
    cin >> taxincome;
}

void Employee ::TaxCalc()
{
    if (taxincome <= 250000)
    {
        tax = taxincome;
    }
    else if (taxincome > 250000 && taxincome <= 300000)
    {
        tax = (taxincome + (taxincome * 0.1));
    }
    else if (taxincome > 300000 && taxincome <= 400000)
    {
        tax = (taxincome + 50000 + (taxincome * 0.2));
    }
    else if (taxincome > 400000)
    {
        tax = (taxincome + 25000 + (taxincome * 0.3));
    }
    else
    {
        cout << "Enter a vaid annual income";
    }
}

void Employee ::DisplayInfo()
{
    cout << "Pan number - " << pan << endl;
    cout << "Name - " << name << endl;
    cout << "Tax Income - Rs." << taxincome << endl;
    cout << "Total amount of money you have to pay is Rs." << tax << endl;
}

int main()
{
    Employee x;
    x.InputInfo();
    x.TaxCalc();
    x.DisplayInfo();
}