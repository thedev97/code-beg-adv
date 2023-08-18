#include <iostream>
using namespace std;

int main()
{
    /*
     PRINT THE PATTERN -8
     1
     21
     321
     4321
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
