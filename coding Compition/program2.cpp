#include <iostream>
using namespace std;

class BankAccount
{
private:
    int no;
    string name;
    int balance;

public:
    BankAccount(int no, string name, int balance)
    {
        this->no = no;
        this->name = name;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount < 0)
        {
            cout << "Amount must be positive." << endl;
            return;
        }

        cout << "--------------------------" << endl;
        balance = balance + amount;
        cout << amount << " successfully deposited amount." << endl;
        cout << "--------------------------" << endl;
    }

    void withdrawal(int amount)
    {
         cout << "--------------------------" << endl;
        if (amount < 0 || balance <= 0)
        {
            cout << "Amount must be positive and Must have some cash in account." << endl;
            return;
        }
        cout << "--------------------------" << endl;
    //    if(balance > 0){
        balance = balance - amount;
        cout << amount << " successfully Withdrawal amount." << endl;
        cout << "--------------------------" << endl;
    //    }
    }

    void display()
    {
        cout << "--------------------------" << endl;
        cout << "Account Number: " << no << endl;
        cout << "Account holder Name: " << name << endl;
        if(balance > 0){
        cout << "Account Balance: " << abs(balance) << endl;
        }
        else{
        cout << "Account Balance is zero: "<<balance<< endl;
        }
        cout << "--------------------------" << endl;
    }
};

int main()
{
    // BankAccount a(111, "Talha", 0);
    BankAccount b(222, "Ali", 0);
    // BankAccount c(333, "Umar", 0);
    
    // a.deposit(1000);
    // a.withdrawal(200);
    // a.display();

    b.withdrawal(200);
    b.display();

    // c.deposit(900);
    // c.withdrawal(500);
    // c.display();

    return 0;
}