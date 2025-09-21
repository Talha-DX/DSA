#include <iostream>
#include <math.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> um = {{1,"Talha"},{3,"Hamza"},{5,"Pakistam"}};

     for(auto i:um){
        cout<<i.first<<" "<<i.second<<endl;
     }

}
