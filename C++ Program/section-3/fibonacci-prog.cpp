#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // n = (n-1) + (n-2)
    int a = 0;
    int b = 1;
    if (n == 0)
        return 0;
    for (int i = 0; i < n - 1; i++)
    {
        int nextNum = a + b;
        cout << nextNum << endl;
        a = b;
        b = nextNum;
    }
    return 0;
}
