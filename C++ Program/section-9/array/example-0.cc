#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int firstArr[] = {2, 5, 6};
    int size = sizeof(firstArr) / sizeof(firstArr[0]);
    printArray(firstArr, size);
    cout << size << endl;
    cout << firstArr[2] << endl;

    char ch[] = {'a', 'b', 'c'};
    int chSize = sizeof(ch) / sizeof(ch[0]);
    cout << chSize << endl;
    for (int i = 0; i <= chSize; i++)
    {
        cout << ch[i] << " ";
    }
    return 0;
}
