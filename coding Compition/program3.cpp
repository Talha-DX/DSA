#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 10 + 1;
    int player1,player2;
    
    int score1 = 0, score2 = 0;

    cout << "Welcome to 2-Player Guessing Game!\n";
    cout << "I'm thinking of a number between 1-10\n";
    
    cout<<"You have 3 rounds."<<endl;
    
    for (int i = 0; i < 3; i++)
    {
    cout<<"Player 1 choice number: "<<endl;
    cin>>player1;
    cout<<"Player 2 choice number: "<<endl;
    cin>>player2;

    if (player1 == secret)
    {
        cout<<"Player 1 guessed corred and win the game."<<endl;
        return 1;
    }
    else if (player1>secret)
    {
        cout<<"Nice Try! Player 1 value is greater 2 point added. Try again."<<endl;
        score1 = score1 + 2;
    }
    else{
        cout<<"Nice Try! Player 1 value is smaller 3 point added. Try again."<<endl;
        score1 = score1 + 3;
    }

    if (player2 == secret)
    {
        cout<<"Player 2 guessed corred and win the game."<<endl;
        return 1;
    }
    else if (player2>secret)
    {
        cout<<"Nice Try! Player 2 value is greater 2 point added. Try again."<<endl;
        score2 = score2 + 2;
    }
    else{
        cout<<"Nice Try! Player 2 value is smaller 3 point added. Try again."<<endl;
        score2 = score2 + 3;
    }

    }
     
   cout<<"Total score of player 1 is: "<<score1<<endl;
   cout<<"Total score of player 2 is: "<<score2<<endl;
    
   if(score1 > score2){
    cout<<"Player 1  is winner."<<endl;
   }
   else if(score1 < score2){
    cout<<"Player 2 is winner."<<endl;
   }else{
    cout<<"Match Tie. No one wins."<<endl;
   }
   

       
    return 0;
}