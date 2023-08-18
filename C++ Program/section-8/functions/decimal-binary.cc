#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int convert(int n, string &str)
{
    if (n == 0)
    {
        str = "0";
        return 0;
    }
    str = "";
    while (n > 0)
    {
        int rem = n % 2;
        str = to_string(rem) + str;
        n /= 2;
    }

    return 0;
}

int main()
{
    int decimal;
    cin >> decimal;
    string binary;
    convert(decimal, binary);
    cout << "Binary of " << decimal << " is " << binary << endl;
}
