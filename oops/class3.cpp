#include <iostream>
using namespace std;
#define MAX 100

class Bank
{
    int x = 1001;
    int ac[100];
    string acname[100];
    string address[100];
    int bal[100];

public:
    void getdata(int n);
    void deposit();
    void withdraw();
    void addresschange();
    void Displalydata(int n);
};
void Bank ::getdata(int n)
{
    for (int i = 0; i < n; i++)
    {
        ac[i] = 1001 + i;
        cout << "Enter the Name for the acount number : " << ac[i] << endl;
        fflush(stdin);
        getline(cin, acname[i]);
        cout << "Enter the address of the Holder : " << endl;
        getline(cin, address[i]);
        cout << "Enter balance of the account : " << endl;
        cin >> bal[i];
    }
}

void Bank ::deposit()
{
    int j, k;
    cout << "Enter 0 for 1001" << endl
         << "Enter 1 for 1002 and so on...." << endl;
    cout << "Enter the numbering of the account you want to deposit into : " << endl;
    cin >> j;
    cout << "Enter the amount you want to deposit : " << endl;
    cin >> k;
    bal[j] = bal[j] + k;
}
void Bank ::withdraw()
{
    int j, k;
    cout << "Enter 0 for 1001" << endl
         << "Enter 1 for 1002 and so on...." << endl;
    cout << "Enter the numbering of the account you want to withdraw from : " << endl;
    cin >> j;
    cout << "Enter the amount you want to withdraw : " << endl;
    cin >> k;
    bal[j] = bal[j] - k;
}

void Bank ::Displalydata(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "The account number is                 : " << ac[i] << endl;
        cout << "The account holders name is           : " << acname[i] << endl;
        cout << "Address of the account holder is      : " << address[i] << endl;
        cout << "Balance of the account is             : " << bal[i] << endl;
    }
}

void Bank ::addresschange()
{
    int j;
    string ad;
    cout << "Enter 0 for 1001" << endl
         << "Enter 1 for 1002 and so on...." << endl;
    cout << "Enter the numbering of the account you want to change Address of : " << endl;
    cin >> j;
    cout << "Enter the new address : " << endl;
    fflush(stdin);
    getline(cin, ad);
    address[j] = ad;
}

int main()
{
    Bank SBI;
    int n;
    int x;
    cout << "Enter the number of depositors : " << endl;
    cin >> n;
    while (true)
    {
        cout << "Press the respective Number to perform specified task" << endl
             << "1. To enter details" << endl
             << "2. To display details" << endl
             << "3. To deposit amount" << endl
             << "4. To withdraw amount" << endl
             << "5. To change address" << endl
             << "6. To exit" << endl;
        cin >> x;
        if (x == 1)
        {
            SBI.getdata(n);
        }
        else if (x == 2)
        {
            SBI.Displalydata(n);
        }
        else if (x == 3)
        {
            SBI.deposit();
        }
        else if (x == 4)
        {
            SBI.withdraw();
        }
        else if (x == 5)
        {
            SBI.addresschange();
        }
        else if (x == 6)
        {
            cout << "Thank you for using this data base" << endl;
            break;
        }
        else
        {
            cout << "Enter valid chioce to perform task" << endl;
            break;
        }
    }

    return 0;
}