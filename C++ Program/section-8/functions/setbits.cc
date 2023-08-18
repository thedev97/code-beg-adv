#include <iostream>
using namespace std;

unsigned setBits(unsigned int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    int ans = setBits(a) + setBits(b);
    cout << "Answer = " << ans << endl;
    return 0;
}
