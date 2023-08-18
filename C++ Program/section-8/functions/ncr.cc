#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerotor = factorial(n);
    int denomerator = factorial(r) * factorial(n - r);

    return numerotor / denomerator;
}

int main()
{
    int n, r;
    cout << "n = ";
    cin >> n;
    cout << "r = ";
    cin >> r;
    cout << "Ans = " << nCr(n, r) << endl;
    return 0;
}
