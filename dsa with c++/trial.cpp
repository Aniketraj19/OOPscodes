#include <iostream>
using namespace std;

class Sorting
{

public:
    int i, j;
    void BubbleSort(int *A, int size);
    void InsertionSort(int *A, int size);
    void shorting_call();
    void print(int *A, int size);
};

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int choices()
{
    int choice;
    cout << endl
         << "Enter the sorting technique you want to use :" << endl
         << "1.Bubble sort" << endl
         << "2.Insertion sort" << endl;
    cin >> choice;
    return choice;
}

void Sorting ::BubbleSort(int *A, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

void Sorting ::InsertionSort(int *A, int size)
{
    int x;
    for (int i = 0; i < size; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

void Sorting::print(int *A, int size)
{
    cout << "Sorted array is :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "The no." << i + 1 << " element of the array is " << A[i] << endl;
    }
}
void Sorting ::shorting_call()
{
    int choice;
    int size;
    cout << "Do you want to allocate memory dynamic or static" << endl
         << "Enter 1 for dynamic and 2 for static : ";

    cin >> choice;
    cout << endl
         << "Enter the size of the array :";
    cin >> size;

    if (choice == 1)
    {
        int *A;
        A = new int[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the " << i + 1 << " element of the array :";
            cin >> A[i];
        }
        int choice2;
        choice2 = choices();
        switch (choice2)
        {
        case 1:
            BubbleSort(A, size);
            print(A, size);
            break;
        case 2:
            InsertionSort(A, size);
            print(A, size);
            break;
        }
    }
    else
    {
        if (choice == 2)
        {
            int A[size];
            for (int i = 0; i < size; i++)
            {
                cout << "Enter the " << i + 1 << " element of the array :";
                cin >> A[i];
            }
            int choice2;
            choice2 = choices();
            switch (choice2)
            {
            case 1:
                BubbleSort(A, size);
                print(A, size);
                break;
            case 2:
                InsertionSort(A, size);
                print(A, size);
                break;
            }
        }
    }
}

int main()
{
    Sorting obj1;
    obj1.shorting_call();

    return 0;
}