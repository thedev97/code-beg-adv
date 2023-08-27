#include <iostream>
#include <stack>
using namespace std;

// Reverse Sentence using Stack
// Welcome to Coding Ninjas = > Ninjas Coding to Welcome 


void reverseString(string str)
{
    stack<string> revStack;
    for (unsigned int i = 0; i < str.length(); i++)
    {
        string words = "";
        while (i < str.length() && str[i] != ' ')
        {
            words += str[i];
            i++;
        }
        revStack.push(words);
    }

    while (!revStack.empty())
    {
        cout << revStack.top() << " ";
        revStack.pop();
    }
    cout << endl;
}

int main()
{
    string str = "Welcome to Coding Ninjas";
    reverseString(str);
    return 0;
}
