#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // prime = (n%i != 0)
    bool isPrime = 1;
    if (n <= 1)
        cout << "Not Prime" << endl;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            isPrime = 0;
        break;
    }

    if (isPrime == 0)
        cout << "Not prime" << endl;
    else
        cout << "prime" << endl;
    return 0;
}
