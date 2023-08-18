#include <iostream>
using namespace std;

int main()
{
    /*
       PRINT THE PATTERN -7
       1
       23
       345
       6789
   */

    // SOLVE -1
    /*int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout<<row+col-1<<" ";
            col++;
        }
        cout << endl;
        row++;
    }*/

    // SOLVE -2
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        int val = row;
        while (col <= row)
        {
            cout << val << " ";
            val++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
