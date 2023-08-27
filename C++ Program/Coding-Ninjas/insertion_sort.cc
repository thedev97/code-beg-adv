#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*void sort012(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    int i = 0;

    int step = 0;

    while (i <= right)
    {
        cout << "Step " << step++ << endl;

        printArray(arr, n);
        cout << endl;
        cout << arr[i] << endl;
        if (arr[i] == 0)
        {

            swap(arr[i], arr[left]);
            left++;
            i++;
        } else if (arr[i] == 2)
        {

            swap(arr[i], arr[right]);
            right--;
        }
        else
        {

            i++;
        }
    }
}*/

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (arr[j] > key && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[] = {0, 1, 2, 1, 2, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}
