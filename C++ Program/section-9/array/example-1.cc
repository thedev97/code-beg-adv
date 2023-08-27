#include <iostream>
using namespace std;

int main()
{
    /*int arr[5] = {1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
    fill_n(arr, size, 1);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }*/

    int arr[5] = {1};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[0] << " ";
    }

    return 0;
}
