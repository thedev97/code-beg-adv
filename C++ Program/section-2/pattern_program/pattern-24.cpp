#include <iostream>
using namespace std;

int main()
{
    /*Pattern - 24
      1234554321
      1234**4321
      123****321
      12******21
      1********1
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        //1st traingle
        int col1 = 1;
        while (col1 <= n - row + 1)
        {
            cout << col1;
            col1++;
        }
        
        //2nd triangle
        int val = row - 1;
        while (val)
        {
            cout << "*";
            val--;
        }

        //3rd triangle
        int val1 = row - 1;
        while (val1)
        {
            cout << "*";
            val1--;
        }

        // 4th triangle
        int col2 = 1;
        int val2 = n-row+1;
        while (col2 <= n-row+1)
        {
            cout << val2;
            val2--;
            col2++;
        }

        cout << endl;
        row++;
    }

    return 0;
}
