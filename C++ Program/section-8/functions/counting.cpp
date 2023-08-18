#include <iostream>
using namespace std;

void counting(int n){
    for(int i = 0; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    counting(n);
    return 0;
}
