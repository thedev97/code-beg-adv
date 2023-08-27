#include <iostream>
#include <vector>
using namespace std;

// Reverse String
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

void reverseString(vector<char> &s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    std::vector<char> st = {'h', 'e', 'l', 'l', 'o'};
    reverseString(st);

    for (char s : st)
    {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
