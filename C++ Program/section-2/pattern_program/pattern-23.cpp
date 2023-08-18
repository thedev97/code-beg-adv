#include <iostream>
using namespace std;

int main()
{
    /*Pattern - 23
         1
        121
       12323
      1234321   
    */
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // space
        int space = n- row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        // 1st triangle
        int col = 1;
        while (col <= row)
        {
            cout<<col;
            col++;
        }

        // 2nd triangle
        int val = row -1;
        while (val)
        {
            cout<<val;
            val--;
        }
        
        cout << endl;
        row++;
    }

    return 0;
}
