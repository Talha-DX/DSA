#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 1, 9, 3, 6, 5, 2, 4, 7, 10, 14, 12, 11, 13};
    int count = 10;

    for (int i = 0; i < count - 1; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for (int y = 0; y < count; y++)
    {
        cout << arr[y] << " ";
    }

    return 0;
}