#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    if (a-- > 0 || ++b > 2)
        cout << "Stage1" << endl; // Stage 1
    else
        cout << "Stage2" << endl;
    cout << a << " " << b << endl; // a = 0, b = 2
    return 0;
}
