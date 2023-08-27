#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        cin>>arr[i];
    }
}


int main()
{
    int arr[] = {9, 1, 2, 3, 45, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Ans = " << sum << endl;
    return 0;
}

