#include <iostream>
using namespace std;

int main()
{
    /*
       PRINT THE PATTERN -2
       111
       222
       333
    */
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
