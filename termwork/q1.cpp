#include <iostream>

#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("sample.txt");
    while (fout)
    {
        cout << "Enter a string : " << endl;
        getline(cin, line);
        cout << "To exit file write mode enter 0" << endl;
        if (line == "0")
            break;
        fout << line << endl;
    }
    fout.close();
    char ch;
    int vow = 0, alpha = 0, cons = 0, num = 0;
    ifstream fin;
    fin.open("sample.txt");
    while (!fin.eof())
    {

        fin.get(ch);
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
            alpha++;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vow++;
        if (ch >= '0' && ch <= '9')
            num++;
    }
    cout << "Alphabets = " << alpha << endl;
    cout << "Vowels = " << vow << endl;
    cout << "Consonants = " << alpha - vow << endl;
    cout << "Numbers = " << num << endl;

    fin.close();

    return 0;
}
