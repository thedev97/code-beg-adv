#include <iostream>
using namespace std;

bool isPowerOfNum(int n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main()
{
    int n;
    cin >> n;
    if (isPowerOfNum(n))
        cout << "Power of " << n << endl;
    else
        cout << "Not the power of " << n << endl;
    return 0;
}
