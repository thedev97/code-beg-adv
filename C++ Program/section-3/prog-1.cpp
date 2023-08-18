#include <iostream>
using namespace std;

int main()
{
    // Bitwise
    int a, b;
    cin >> a;
    cin >> b;
    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << ~a << endl;
    cout << "a^b " << (a ^ b) << endl;

    // Left shift operator
    /*cout << (5 << 1) << endl;
    cout << (8 << 3) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;
    cout << (24 << 1) << endl;*/

    // Right shift operator
    /*cout << (5 >> 1) << endl;
    cout << (5 >> 3) << endl;
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (24 >> 1) << endl;*/

    // Post and Pre Increament / Decreament
    /*int i = 7;
    cout << (i++) << endl; // i = 7
    cout << (++i) << endl; // 8, i = 9
    cout << (i--) << endl; // i = 9,  8
    cout << (--i) << endl; // i = 7*/
    return 0;
}
