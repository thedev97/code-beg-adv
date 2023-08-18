#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int nextNum;
    if(n==0) return 0;
    for (int i = 0; i < n-1; i++)
    {
        nextNum = a + b;
        a = b;
        b = nextNum;
    }
    return nextNum;
}

int main()
{
    int n;
    cin >> n;
    cout << "Ans = " << fibonacci(n) << endl;
    return 0;
}
// 1 1 2 3 5 8 13 21 34