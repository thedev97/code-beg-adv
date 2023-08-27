#include <iostream>
using namespace std;

int uniqueNum(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 3, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueN = uniqueNum(arr, size);
    cout<<uniqueN<<endl;
    return 0;
}
