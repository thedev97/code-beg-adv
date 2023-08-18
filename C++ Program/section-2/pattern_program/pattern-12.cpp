#include <iostream>
using namespace std;

int main()
{
    /*
      PRINT THE PATTERN -12
      A B C
      B C D
      C D E
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        // SOLVE 1
        /*int val = row;
        while (col <= n)
        {
            char ch = 'A' + val - 1;
            cout << ch << " ";
            val++;
            col++;
        }*/
        // SOLVE 2
        while (col <= n)
        {
            char ch = 'A' + row + col - 1 - 1;
            cout << ch;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
