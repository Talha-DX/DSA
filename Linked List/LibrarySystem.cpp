#include <iostream>
using namespace std;

struct Node
{
    string Book;
    string author;
    int Reg;
    Node *next;
};

void add(Node *&root)
{
    Node *box = new Node();
    box->next = NULL;

    cout << "Enter Name of Book: " << endl;
    cin >> box->Book;
    cout << "Enter Register of Book: " << endl;
    cin >> box->Reg;
    cout << "Enter Author of Book: " << endl;
    cin >> box->author;
    if (root == NULL)
    {
        root = box;
    }
    else
    {
        Node *temp = root;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = box;
    }

    cout << "Successfull Added." << endl;
}

void Delete(Node *&root)
{
    if (root == NULL)
    {
        cout << "No Book is stored." << endl;
        return;
    }

    int reg;
    cout << "Enter Registrer NO: " << endl;
    cin >> reg;

    Node *temp = root;
    Node *prev = NULL;

    while (temp != NULL && temp->Reg != reg)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Register not found." << endl;
        return;
    }

    if (prev == NULL)
    {
        root = root->next;
    }
    else
    {
        prev->next = temp->next;
    }
    delete temp;
    cout << "Deleted Successfully." << endl;
}

void Update(Node *&root)
{
    if (root == NULL)
    {
        cout << "No Book is stored." << endl;
        return;
    }

    int reg;
    cout << "Enter Registrer NO to update: " << endl;
    cin >> reg;

    Node *temp = root;
    while (temp != NULL && temp->Reg != reg)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Book not found." << endl;
        return;
    }

    cout << "Enter book name: " << endl;
    cin >> temp->Book;
    cout << "Enter book author: " << endl;
    cin >> temp->author;
}

void display(Node *root)
{
    if (root == NULL)
    {
        cout << "No Book is stored." << endl;
        return;
    }

    while (root != NULL)
    {
        cout << "------------------------" << endl;
        cout << "Book Name: " << root->Book << endl;
        cout << "Registrer No: " << root->Reg << endl;
        cout << "Autor NO: " << root->author << endl;
        cout << "------------------------" << endl;
        root = root->next;
    }
}

int main()
{
    int choice = 0;
    Node *root = NULL;

    while (choice != 5)
    {
        cout << "-------------------------------" << endl;
        cout << "...Library Management System..." << endl;
        cout << "-------------------------------" << endl;
        cout << "1: Add Book: " << endl;
        cout << "2: Delete Book: " << endl;
        cout << "3: Update Book: " << endl;
        cout << "4: Display Book: " << endl;
        cout << "5: Exit: " << endl;
        cout<<"Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add(root);
            break;

        case 2:
            Delete(root);
            break;

        case 3:
            Update(root);
            break;

        case 4:
            display(root);
            break;

        case 5:
            cout << "Exiting...." << endl;
            break;

        default:
            cout << "You enter Wrong choice." << endl;
            break;
        }
    }

    return 0;
}