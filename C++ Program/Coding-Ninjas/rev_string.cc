#include <iostream>
using namespace std;

// Reverse words
// Welcome to Coding Ninjas => sajniN gnidoC ot emocleW

string reverseString(string &str)
{
    string revStr = "";
    for (unsigned int i = 0; i < str.length(); i++)
    {
        revStr = str[i] + revStr;
    }
    return revStr;
}

int main()
{
    string str = "hello";
    string rev = reverseString(str);
    cout << rev << endl;
    return 0;
}

// sajniN gnidoC ot emocleW
