#include <iostream>
#include <math.h>
#include<limits.h>
using namespace std;

/*int main()
{
    int n;
    cin >> n;
    bool isPowerOfTwo = false;
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            isPowerOfTwo = true;
        }
    }
    if (isPowerOfTwo == true)
    {
        cout << "It's the power of 2" << endl;
    }
    else
    {
        cout << "It's not the power of 2" << endl;
    }
    return 0;
}*/

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    bool isPowerOfTwo = false;
    for (int i = 0; i < 30; i++)
    {
        if (ans == n)
        {
            isPowerOfTwo = true;
        }
        if (ans < INT_MAX/2)
        {
            ans = ans * 2;
        }
    }
    if (isPowerOfTwo == true)
    {
        cout << "It's the power of 2" << endl;
    }
    else
    {
        cout << "It's not the power of 2" << endl;
    }
    return 0;
}
