#include <iostream>
using namespace std;

int main()
{
    /*
      PRINT THE PATTERN -5
      *
      **
      ***
      ****
    */

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    /*
      PRINT THE PATTERN -6
      1
      22
      333
      4444
    */
    /*int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }*/

    return 0;
}
