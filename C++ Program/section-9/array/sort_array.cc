#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*void sortZeroesAndOne(int input[], int size)
{
    int left = 0;
    int right = size-1;

    while(left<right){
        while(input[left]== 0 && left<right){
            left++;
        }

        while(input[right] == 1 && left<right){
            right--;
        }

        if (left < right) {
            input[left] = 0;
            input[right] = 1;
            left++;
            right--;
        }
    }
}*/

void sortArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        if (arr[left] == 0 && left < right)
        {
            left++;
        }

        if (arr[right] == 1 && left < right)
        {
            right--;
        }

        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

/*void sortArray(int arr[], int size){
    for(int i = 1; i< size; i++){

        int key = arr[i];
        int j = i-1;

        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;
    }
}*/

int main()
{
    int a[] = {1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1 };
    int size = sizeof(a) / sizeof(a[0]);

    sortArray(a, size);
    printArray(a, size);
    return 0;
}
