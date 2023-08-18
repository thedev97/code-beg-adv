#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int ans = isPrime(n);
    if (ans == 0)
        cout << "Ans = Not prime" << endl;
    else
        cout << "Ans = Prime" << endl;

    return 0;
}
