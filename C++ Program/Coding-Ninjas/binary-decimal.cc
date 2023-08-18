#include <iostream>
#include <string>
using namespace std;

/*int convert(string &str)
{
    return stoi(str, 0, 2);
}*/

int convert(int N, string &str)
{
    int i = 0;
    int ans = 0;
    while (i < N)
    {
        char ch = str[i];
        int digit = int(ch) - 48;
        ans = (ans * 2) + digit;
        i++;
    }
    return ans;
}

int main()
{

    string binary;
    cin >> binary;

    int decimal = convert(binary.length(), binary);
    cout << "Decimal of " << binary << " is " << decimal << endl;
    return 0;
}
