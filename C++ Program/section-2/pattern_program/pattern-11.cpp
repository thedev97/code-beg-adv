#include <iostream>
using namespace std;

int main()
{
    /*
   PRINT THE PATTERN -11
     ABC
     DEF
     GHI
   */
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
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
