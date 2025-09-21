#include <iostream>
using namespace std;

int main()
{
    int item;
    int bill;
    int a = 0, b = 0, bb = 0;

    while (item != 7)
    {
        cout << "Item catagory." << endl;
        cout << "1: Apple  30$" << endl;
        cout << "2: Banana 40$" << endl;
        cout << "3: Mango  50$" << endl;
        cout << "4: Gawa   10$" << endl;
        cout << "5: Burry  20$" << endl;
        cout << "6: Display Bill" << endl;
        cout << "7: Exit" << endl;
        cout << "Select your choice: ";
        cin >> item;

        switch (item)
        {
        case 1:
            bill = bill + 30;
            cout << " Apple Item Added" << endl;
            a++;
            break;
        case 2:
            bill = bill + 40;
            cout << "Mango Item Added" << endl;
            b++;
            break;
        case 3:
            cout << "Currently this Item is not availbable." << endl;
            break;
        case 4:
            cout << "Currently this Item is not availbable" << endl;
            break;
        case 5:
            bill = bill + 20;
            cout << "Burry Item Added" << endl;
            bb++;
            break;
        case 6:
            cout << "Number of Apple you select " << a << " " << a * 30 << "$" << endl;
            cout << "Number of Apple (Not Availble Sorry) " << endl;
            cout << "Number of Apple (Not Availble Sorry) " << endl;
            cout << "Number of Banana you select " << b << " " << b * 40 << "$" << endl;
            cout << "Number of Burry you select " << bb << " " << bb * 20 << "$" << endl;
            if (bill > 100)
            {
                bill = bill - bill * 0.10;
                cout << "After Adding discount of 10% bill will be: " << endl;
            }
            cout << "Total Bill :" << bill << "$" << endl;
            break;
        case 7:
            cout << "Leaving Shop." << endl;
            break;
        default:
            cout << "You enter wrong choice Try again." << endl;
            break;
        }
    }

    return 0;
}