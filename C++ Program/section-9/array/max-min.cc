#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[], int size)
{
    int maxNum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // using prefined func
        maxNum = max(maxNum, arr[i]);

        /*if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }*/
    }

    return maxNum;
}

int getMin(int arr[], int size)
{
    int minNum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // using prefined func
        minNum = min(minNum, arr[i]);

        /*if (arr[i] < minNum)
        {
            minNum = arr[i];
        }*/
    }
    return minNum;
}

int main()
{
    // int arr[] = {-4, 5, 3, 20};
    // int size = sizeof(arr) / sizeof(arr[0]);

    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum = " << getMax(arr, size) << endl;
    cout << "Minimum = " << getMin(arr, size) << endl;
    return 0;
}
