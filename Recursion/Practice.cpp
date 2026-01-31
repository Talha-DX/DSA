#include <iostream>
using namespace std;

// Array opt
// Searching Linear and Binary
// array operation
// Bubble sort
// Linked List single
//-------------------------------------------------------------------
// Loops and Basic Operations (ALL loops included)
// Arrays
// Searching
// Sorting
// Functions
// Pointers
// Structures
// Singly Linked List All Labs included instead of Doubly linked list.
//--------------------------------------------------------------------

struct Node
{
    int data;
    Node *next;
};

// class LinkedList
// {
// private:
//     Node *head;
//     Node *tail;

// public:
//     LinkedList()
//     {
//         head = NULL;
//         tail = NULL;
//     }

//     Node *createList(int value){
//         Node* temp = new Node();
//         if(temp == NULL){
//             cout<<"Memory is not allocated."<<endl;
//             return NULL;
//         }
//         temp->data = value;
//         temp->next = NULL;
//         return temp;
//     }

//     void insertBeg(int value)
//     {
//       Node* temp = createList(value);
//       if(head == NULL){
//         head = tail = temp;
//       }
//       else{
//         temp->next = head;
//         head = temp;
//       }
//       cout<<"Inserted at Begging "<<value<<" value."<<endl;
//     }
//     void insertEnd(int value)
//     {
//         Node* temp = createList(value);
//         if (tail == NULL){
//             tail = temp;
//         }else{
//             temp->next = tail;
//             tail =
//         }

//     }
//     void insertPos(int value)
//     {

//     }

// };

void insertBeg(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    cout << "Inserted at Begging, " << value << " value." << endl;
}
void insertEnd(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        insertBeg(head, value);
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << "Successfully Added." << endl;
    }
}
void insertPos(Node *&head, int value, int pos)
{
    Node *newNode = new Node();
    newNode->data = value;

    if (pos < 1)
    {
        cout << "Position have to be >= 1" << endl;
        return;
    }
    if (pos == 1)
    {
        insertBeg(head, value);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Successfully Added." << endl;
    }
}

void update(Node *&head, int element)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    bool found = false;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == element)
        {
            cout << "Enter New Data: ";
            cin >> temp->data;
            found = true;
        }
        temp = temp->next;
    }
    if (!found)
    {
        cout << "Element dont found." << endl;
    }
}

void DeleteBeg(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;

    cout << "Successfully Deleted." << endl;
}

void DeleteEnd(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head->next;
        cout << "Successfully Deleted." << endl;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    cout << "Successfully Deleted." << endl;
}
void DeletePos(Node *&head, int pos)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    if (pos < 1)
    {
        cout << "pos have to be greater then > 1." << endl;
        return;
    }
    if (pos == 1)
    {
        DeleteBeg(head);
    }
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "Postioion out of bound." << endl;
            return;
        }
        temp = temp->next;
    }
    delete temp->next;
    cout << "Successfully Deleted." << endl;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void search(Node* head, int value){
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    bool found = false;
    Node* temp = head;

    while (temp != NULL)
    {
        if (value == temp->data){
           cout<<"Value founded: "<<temp->data<<endl;
           found = true;
           return;
        }
        temp = temp->next;
    }
    if (!found){
        cout<<" Not founded! "<<endl;
    }
}

void reverse(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;

    cout<<"Successfully Reveersed all elements."<<endl;
}

void sorting(Node* head){
   if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    for (Node* i = head; i != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
             if(i->data > j->data){
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
             }
        }
    }
    cout<<"Successfully sorted in ascending order."<<endl;
}

int main()
{
    Node *head = NULL;
    int choice = 0;

    while (choice != 8)
    {
        cout << "\n-----------------" << endl;
        cout << "===Linked List===" << endl;
        cout << "-----------------" << endl;
        cout << "1:Add Element: " << endl;
        cout << "2:Update Element: " << endl;
        cout << "3:Delete Element: " << endl;
        cout << "4:Reverse Element: " << endl;
        cout << "5:Search Element: " << endl;
        cout << "6:Display Elements: " << endl;
        cout << "7:Sorting Elemnts: " << endl;
        cout << "8:Exit: " << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int c, value;
            cout << "1: Insert Element at Beg: " << endl;
            cout << "2: Insert Element at End: " << endl;
            cout << "3: Insert Element at Pos: " << endl;
            cout << "Enter your choice: ";
            cin >> c;
            if (c == 1)
            {
                cout << "Enter Value: ";
                cin >> value;
                insertBeg(head, value);
            }
            else if (c == 2)
            {
                cout << "Enter Value: ";
                cin >> value;
                insertEnd(head, value);
            }
            else if (c == 3)
            {
                int pos;
                cout << "Enter Position: ";
                cin >> pos;
                cout << "Enter Value: ";
                cin >> value;
                insertPos(head, value, pos);
            }
            else
            {
                cout << "Wrong Choice." << endl;
            }
            break;

        case 2:
            int element;
            cout << "Enter Element you want to Update: ";
            cin >> element;
            update(head, element);
            break;

        case 3:
            int d;
            cout << "1: Delete Element at Beg: " << endl;
            cout << "2: Delete Element at End: " << endl;
            cout << "3: Delete Element at Pos: " << endl;
            cout << "Enter your choice: ";
            cin >> d;
            if (d == 1)
            {
                DeleteBeg(head);
            }
            else if (d == 2)
            {
                DeleteEnd(head);
            }
            else if (d == 3)
            {
                int pos;
                cout << "Enter Position: ";
                cin >> pos;
                DeletePos(head, pos);
            }
            else
            {
                cout << "Wrong Choice." << endl;
            }
            break;

        case 4:
            reverse(head);
            break;

        case 5:
            int data;
            cout<<"Enter value to find: ";
            cin>>data;
            search(head, data);
            break;

        case 6:
            display(head);
            break;

        case 7:
             sorting(head);
            break;

        case 8:
             cout<<"Exiting..."<<endl;
            break;

        default:
            cout << "Wrong Choice." << endl;
            break;
        }
    }

    return 0;
}