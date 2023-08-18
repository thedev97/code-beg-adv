/*Number of 1 Bits

Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has
(also known as the Hamming weight).

Example 1:
Input: n = 00000000000000000000000000001011
Output: 3*/

#include <iostream>
using namespace std;

int main()
{
    uint32_t n = 00000000000000000000000000001011;
    int count = 0;
    while(n!=0){
        // Find last digit numbers
        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    cout<<count<<endl;
    return 0;
}
