#include <iostream>
using namespace std;

int pow(int a, int n)
{
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        val *= a;
    }
    return val;
}

int main()
{
    int a, n;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int ans = pow(a, n);
    cout << "Answer = "<<ans << endl;
    return 0;
}