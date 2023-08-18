#include <iostream>
using namespace std;

int main()
{
    /*
      PRINT THE PATTERN -13
      A
      B B
      C C C
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
