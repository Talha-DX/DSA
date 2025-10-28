#include <iostream>
using namespace std;

void swap(int arr[], int j){
    if (arr[j] > arr[j + 1])
    {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {4, 3, 5, 1, 2, 9, 6, 7, 8, 10};
    int n = 10;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr, j);
        }
    }

    for (int y = 0; y < n; y++)
    {
        cout << arr[y] << " ";
    }
}


    
