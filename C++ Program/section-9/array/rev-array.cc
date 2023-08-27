#include <iostream>
using namespace std;

void revArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 9};
    int size1 = sizeof(arr) / sizeof(arr[0]);

    int arr2[] = {4, 63, 14, 25, 19};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    revArray(arr, size1);
    revArray(arr2, size2);

    printArray(arr, size1);
    printArray(arr2, size2);
    return 0;
}
