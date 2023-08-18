#include <iostream>
using namespace std;

int main()
{
    /*Pattern - 16 - A
    D
    C D
    B C D
    A B C D
    */
    /*Pattern - 16 - B
     4
     3 4
     2 3 4
     1 2 3 4
    */
    // 16 - B
    int n;
    cin >> n;
    int row = 1;
    /*while (row <= n)
    {
        int col = 1;
        int val = n - row;
        while (col <= row)
        {
            cout << val + 1;
            val++;
            col++;
        }
        cout << endl;
        row++;
    }*/

    // 16 -  A
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + n - row;
        while (col <= row)
        {
            cout << ch;
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
