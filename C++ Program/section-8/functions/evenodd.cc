#include <iostream>
using namespace std;

bool isEven(int num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    bool ans = isEven(n);
    if (ans == true)
        cout << n << " is a even number" << endl;
    else
        cout << n << " is a odd number" << endl;
    return 0;
}
