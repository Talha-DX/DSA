#include <iostream>
using namespace std;

struct Node
{
    string name;
    int Rollno;
    int age;
    Node *next;
};

void add(Node *&root)
{
    Node *box = new Node();
    box->next = NULL;

    cout << "Enter name of Student: " << endl;
    cin >> box->name;
    cout << "Enter RollNo of Student: " << endl;
    cin >> box->Rollno;
    cout << "Enter Age of Student: " << endl;
    cin >> box->age;

    if (root == NULL)
    {
        root = box;
        cout << "Successfull Student Added!" << endl;
    }
    else
    {
        Node *temp = root;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = box;
        cout << "Successfull Student Added!" << endl;
    }
}

void Delete(Node *&root)
{
    if (root == NULL)
    {
        cout << "No Data of Students." << endl;
        return;
    }
    int roll;
    cout << "Enter Roll No of Student want to Delete: " << endl;
    cin >> roll;

    Node *temp = root;
    Node *prev = NULL;

    while (temp != NULL)
    {

        if (roll == temp->Rollno)
        {
            if (temp == root)
            {
                root = root->next;
            }
            else
            {
                prev->next = temp->next;
            }
            delete temp;
            cout << "Deleted Successfullt." << endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "OOP's! Data isn't Found." << endl;
}
void update(Node *root)
{
    if (root == NULL)
    {
        cout << "No Data of Students." << endl;
        return;
    }
    int age;
    cout << "Enter age of student: " << endl;
    cin >> age;
    while (root != NULL)
    {
        if (age == root->age)
        {
            cout << "-------------------------------" << endl;
            cout << "Enter name of Student: " << endl;
            cin >> root->name;
            cout << "Enter RollNo of Student: " << endl;
            cin >> root->Rollno;
            cout << "Enter Age of Student: " << endl;
            cin >> root->age;
            cout << "-------------------------------" << endl;
            cout << "Updated Successfully." << endl;
            return;
        }
        root = root->next;
    }
    cout << "OOP's! Data isn't Found." << endl;
}

void sea(Node *root)
{
    if (root == NULL)
    {
        cout << "No Data of Students." << endl;
        return;
    }

    int age;
    cout << "Enter Age of Student want to Search: " << endl;
    cin >> age;

    while (root != NULL)
    {
        if (age == root->age)
        {
            cout << "-------------------------------" << endl;
            cout << "Name: " << root->name << endl;
            cout << "Roll No: " << root->Rollno << endl;
            cout << "Age: " << root->age << endl;
            cout << "-------------------------------" << endl;
            return;
        }
        root = root->next;
    }
    cout << "OOP's! Data isn't Found." << endl;
}

void display(Node *root)
{
    if (root == NULL)
    {
        cout << "No Data of Students." << endl;
        return;
    }

    Node *temp = root;
    while (temp != NULL)
    {
        cout << "-------------------------------" << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Roll No: " << temp->Rollno << endl;
        cout << "Age: " << temp->age << endl;
        cout << "-------------------------------" << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *root = NULL;
    int choice = 0;
    while (choice != 6)
    {
        cout << "-------------------------------" << endl;
        cout << "...Student Management System..." << endl;
        cout << "-------------------------------" << endl;
        cout << "1: Add Student: " << endl;
        cout << "2: Delete Student: " << endl;
        cout << "3: Update Student Data: " << endl;
        cout << "4: Search Any Student: " << endl;
        cout << "5: Display all Student Data: " << endl;
        cout << "6: Exit: " << endl;
        cout << "Enter Your Choice: ";
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
            update(root);
            break;

        case 4:
            sea(root);
            break;

        case 5:
            display(root);
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Wrong Choice." << endl;
            break;
        }
    }

    return 0;
}