#include <iostream>
#include<vector>
using namespace std;

/*void revArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << " "<< endl;

    revArray(arr, size);
    cout << "Reverse array" << endl;
     for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}*/

void reverseArray(vector<int> &arr, int m){
    int start = 0;
    int end = m-1;
    while (start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    } 
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int m = arr.size();

    cout<<"Original array"<<endl;
    for (int i = 0; i < m; ++i)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArray(arr, m);
    cout<<"Reverse array"<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
