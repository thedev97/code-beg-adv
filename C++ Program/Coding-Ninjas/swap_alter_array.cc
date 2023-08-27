#include <iostream>
using namespace std;

/*void swapAlterArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}*/

void swapAlterArray(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
    
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 2, 7, 8, 5};
    int arr2[6] = {1, 2, 3, 4, 5, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    swapAlterArray(arr1, size1);
    swapAlterArray(arr2, size2);

    printArray(arr1, size1);
    cout << endl;
    printArray(arr2, size2);
    return 0;
}
