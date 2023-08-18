/* Complement of Base 10 Integer / Number Complement
The complement of an integer is the integer you get when you flip all the 0's to 1's and 
all the 1's to 0's in its binary representation.
For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

Example 1:
Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int mask = 0;
    //edge case
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask = (mask<<1) |1;
        m = m>>1;
    }
    int ans = (~n) & mask;
    cout<<ans<<endl;
    return 0;
}
