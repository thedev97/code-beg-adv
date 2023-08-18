#include <iostream>
using namespace std;

int main()
{
    string s = "bobs";
    bool isPalindrome = 1;
    if (s.length() < 1)
        isPalindrome = 1;
    int st = 0;
    int en = s.length() - 1;
    while (st < en)
    {
        while (st < en && !isalnum(s[st]))
            st++;
        while (st < en && !isalnum(s[en]))
            en--;
        while (st < en && tolower(s[st]) != tolower(s[en]))
        {
            isPalindrome = 0;
            break;
        }

        st++;
        en--;
    }

    if (isPalindrome == 0)
        cout << "Not an valid palidrome string";
    else
        cout << "Valid palidrome string";

    return 0;
}