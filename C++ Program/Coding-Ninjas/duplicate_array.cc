#include <iostream>
#include <vector>
using namespace std;

/*int duplicateNum(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i<size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }


    return ans;
}*/

int duplicateNum(vector<int> arr)
{
    int ans = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (size_t i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    // int arr[] = {6, 3, 1, 5, 4, 3, 2};
    // int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> num = {6, 3, 1, 5, 4, 3, 2};
    int duplicateN = duplicateNum(num);
    cout << duplicateN << endl;
    return 0;
}
