#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

// Binar -> Decimal Convert
// Logic ~1
int main()
{
    int n;
    cin>>n;
    int ans = 1;
    int i = 0;
    while (n!=0)
    {
       int bits = n&1;
       ans = (bits * pow(10,i))+ans;
       n = n>>1;
       i++;
    }
    cout<<ans<<endl;
    return 0;
}

// Logic ~2
/*int main()
{
    int n;
    cin >> n;
    int rem;
    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
    }
    cout << ans << endl;
    return 0;
}*/


