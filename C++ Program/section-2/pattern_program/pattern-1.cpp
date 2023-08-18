#include <iostream>
using namespace std;

int main()
{
    /*
     PRINT THE PATTERN -1
     ****
     ****
     ****
     ****
    */

    int n;
    cin >> n;

    // SOLVE -1
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    // SOLVE -2

    /*int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }*/

    return 0;
}
