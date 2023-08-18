#include <iostream>
using namespace std;

int main()
{
    /*
      PRINT THE PATTERN -14
      A
      B C
      D E F
      G H I J
    */
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + count - 1;
            cout << ch << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
