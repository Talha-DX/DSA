#include<iostream>
using namespace std;

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b;
    cin>>b;

    for (int i = 0; i < 10; i++)
    {
        if (b == a[i])
    {
        cout<<"Founded"<<endl;
        return 0;
    }
    else{
        cout<<"Not founded"<<endl;
        return 0;
    }
    }
}