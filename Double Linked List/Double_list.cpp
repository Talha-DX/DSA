#include <iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};

int main()
{
    Node *head = nullptr;

    Node *n1 = new Node(100);
    Node *n2 = new Node(200);
    Node *n3 = new Node(300);
    Node *n4 = new Node(400);
    Node *n5 = new Node(500);

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = nullptr;

    n1->prev = nullptr;
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;
    n5->prev = n4;

    Node *temp = head;

    cout << "Forward" << endl;

    while (temp != nullptr)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }

    Node *last = n5;

    cout << "\nBackward" << endl;

    while (last != nullptr)
    {
        cout << last->data;
        if (last->prev != nullptr)
            cout<< "<->";
        last = last->prev;
    }

    return 0;
}