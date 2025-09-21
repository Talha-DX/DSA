#include <iostream>
using namespace std;

int main()
{
    int f, s, t;
    int score = 0;

    cout << "Enter your first throw score btw (1 to 10): " << endl;
    cin >> f;
    cout << "Enter your second throw score btw (1 to 10): " << endl;
    cin >> s;
    cout << "Enter your third throw score btw (1 to 10): " << endl;
    cin >> t;

    if (f > 10 || s > 10 || t > 10)
    {
        cout << "You enter out of range score..." << endl;
        return 1;
    }

    if(f != 10 && f+s > 10){
        cout<<"Cannot be greeater than 10."<<endl;
        return 1;
    }

    if(f == 10){
        score = 10 + s + t;
        cout << "Strike first now Score: " << score << endl;
    }
    else if(f + s == 10)
    {
        score = 10 + t;
        cout << "Third + Score: " << score << endl;
    }
    else{
        
        score = f + s;
        cout << "First and Second throw Score: " << score << endl;
    }

    return 0;
}