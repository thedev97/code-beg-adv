#include <iostream>
using namespace std;

int main()
{
    /*Pattern - 16
     * * * *
     * * *
     * *
     *
     */
    int n;
    cin >> n;
    int row = 1;
    /*for(row = 0; row< n; row++){
        for (col = 0; col < n - row; col++)
        {
            cout<<"*" << " ";
        }
        cout<<endl;
    }*/
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row)
        {
            cout << "*"
                 << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
