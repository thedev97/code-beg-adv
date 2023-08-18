#include <iostream>
using namespace std;

int main()
{
    /*Pattern - 20
            1
          2 2
        3 3 3
      4 4 4 4
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <=row)
        {
            cout<<row-1+1;   
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
