#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 3, 5, 1, 2, 9, 6, 7, 8, 10};
    int count = 10;

    
    for (int i = 0; i < count-1; i++)
    {
        int min = i;
     
        for (int j = i + 1; j < count; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}

