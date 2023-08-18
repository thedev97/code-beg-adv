#include <iostream>
using namespace std;

int main()
{
    /*
      PRINT THE PATTERN -15
      A
      B C
      C D E
      D E F G
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = ('A' + row + col -1)-1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
