#include <iostream>
#include <bitset>
using namespace std;

string decimalToBimary(int num)
{
    if (num == 0)
    {
        return "0";
    }
    string binary;
    int absNum = -num;
    while (absNum > 0)
    {
        binary = absNum % 2 == 0 ? "0" : "1" + binary;
        absNum /= 2;
    }
    // Convert 2's complement
    for(char&bit : binary){
        bit = (bit == '0') ? '1' :'0';
    }

    return binary;
}

int main()
{
    int n;
    cin >> n;
    string bToD = decimalToBimary(n);
    cout<<bToD<<endl;
    return 0;
}
