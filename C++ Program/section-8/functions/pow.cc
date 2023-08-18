#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

bool power(int n)
{
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }

        if (ans < INT_MAX / 2)
        {
            ans = ans * 2;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (power(n) == 1)
    {
        cout << "It's power of 2" << endl;
    }
    else
    {
        cout << "It's not power of 2" << endl;
    }
    return 0;
}
