#include <iostream>
using namespace std;

int main()
{
    int total_amt;
    cout << "Please enter total amount" << endl;
    cin >> total_amt;
    int req_amt;
    int recent_amt;
    cout << "Please enter required amount" << endl;
    cin >> req_amt;

    switch (req_amt)
    {
    case 100:
        cout << "100/-count:" << endl;
        cout << (total_amt / req_amt) << endl;
        recent_amt = (total_amt % req_amt) % req_amt;
        cout << " " << endl;
    case 50:
        cout << "50/- count:" << endl;
        cout << (recent_amt / 50) << endl;
        recent_amt = recent_amt % 50;
        cout << " " << endl;
    case 20:
        cout << "20/- count:" << endl;
        cout << (recent_amt / 20) << endl;
        recent_amt = recent_amt % 20;
        cout << " " << endl;
    case 1:
        cout << "1/- count:" << endl;
        cout << (recent_amt / 1) << endl;
        cout << " " << endl;
        break;
    default:
        break;
    }
    return 0;
}
