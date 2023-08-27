#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return true;
    }
    return false;
}

int main()
{
    int key;
    cin >> key;

    int arr[] = {100, 1, 99, 43, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bool found = linearSearch(arr, size, key);
    if (found)
        cout << key << " is present in this array" << endl;
    else
        cout << key << " isn't present in this array" << endl;
    return 0;
}
