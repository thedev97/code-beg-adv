#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n = 6;
    int ans = 1;
    int i = 0;
    while(n!=0){
        int bits = n&1;
        ans = (bits*pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}


