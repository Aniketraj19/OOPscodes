#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *first;

public:
    LinkedList();
    ~LinkedList();

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Length();
};

LinkedList ::LinkedList()
{
    first = new Node;
    int val;
    cout << "Enter the value of the first node of the linked list " << endl;
    cin >> val;
    first->data = val;
    first->next = NULL;
    Node *ptr = first;

    cout << "Enter 0 any time to terminate the creation of the linked list" << endl;

    while (val != 0)
    {
        cin >> val;
        if (val != 0)
        {
            Node *temp = new Node;
            temp->data = val;
            temp->next = NULL;
            ptr->next = temp;
            ptr = temp;
        }
        else
        {
            break;
        }
    }
}

LinkedList ::~LinkedList()
{
    Node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display()
{
    Node *ptr = first;
    while (ptr)
    {
        cout << "The data is - " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    LinkedList one;
    one.Display();

    return 0;
}