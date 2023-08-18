#include <iostream>
using namespace std;

int main()
{
    /*Pattern - 19 - A
     ****
     ***
     **
     *
     */
    /*Pattern - 19 - B
      1111
       222
        33
         4
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        // SOLVE - 19-A
        /*while (col <= n - row + 1)
        {
            cout << "*";
            col++;
        }*/
        // SOLVE - 19-B
        while (col <= n - row + 1)
        {
            cout << row;
            col++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
