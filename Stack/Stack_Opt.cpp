#include<iostream>
using namespace std;

#define max 10
int stack[max];
int top = -1;


void add(){

}

int main()
{
    int choice = 0;
    while (choice != 5)
    {
        cout << "-------------------------------" << endl;
        cout << "...Stack Management System..." << endl;
        cout << "-------------------------------" << endl;
        cout << "1: Add Node: " << endl;
        cout << "2: Delete Node: " << endl;
        cout << "3: Update Node: " << endl;
        cout << "4: Display Nodes: " << endl;
        cout << "5: Exit: " << endl;
        cout<<"Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        add();
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
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