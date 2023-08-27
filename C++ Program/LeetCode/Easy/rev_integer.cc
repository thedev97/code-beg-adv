/* Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Example 1:
Input: x = 123
Output: 321
*/

#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN/10)
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans << endl;
    return 0;
}
