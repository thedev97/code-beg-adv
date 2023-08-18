#include <iostream>
using namespace std;

// int isPrime(int);

int main()
{
    /*cout<<"Hello World" << endl;
    int a = 'a';
    cout << a << endl;

    char b = 98;
    cout << b << endl;

    char c = 123456;
    cout << c << endl;

    int d = -5;
    cout << d << endl;
    */

    /*int a, b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;

    if (a > b)
    {
        cout << "A is gretter" << endl;
    }
    if (b > a)
    {
        cout << "B is gretter" << endl;
    }*/

    /*int a;
    cout << "Enter the value of a" << endl;
    cin >> a;

    if (a > 0)
    {
        cout << "Positive" << endl;
    }
    else if (a < 0)
    {
        cout << "Negetive" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }*/

    /*int a = 2;
    int b = a+1;

    if((a=3) == b){
        cout<<a;
    }else{
        cout<<a+1;
    }*/

    /*char ch = 's';

    if (isupper(ch))
    {
        cout << "Uppercase" << endl;
    }
    else if (islower(ch))
    {
        cout << "Lowecase" << endl;
    }
    else
    {
        cout << "Number" << endl;
    }*/

    /*int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }*/

    // SUM NUMBER USING FOR LOOP
    /*int sum = 0;
    int n = 5;
    for(int i = 1; i<=n; i++){
        sum = sum +i;
    }
    cout<<sum<<endl;*/

    // SUM NUMBER USING WHILE LOOP
    /*int n = 5;
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << sum << endl;*/

    // FACTORIAL NUMBER
    /*int n;
    cin>> n;
    int factorial = 1;
    for(int i= 1; i<=n; i++){
        factorial = factorial*i;
    }
    cout<< factorial <<endl;*/

    // EVEN NUMBER
    /*int n;
    cin >> n;
    int i = 2;
    while (i <= n)
    {
        cout << i << endl;
        i = i + 2;
    }*/

    // ODD NUMBER
    /*int n = 5;
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i = i + 2;
    }*/

    // IS PRIME
    /*int n;
    cin >> n;
    if (isPrime(n))
        cout << n << " is a prime numb " << endl;
    else
        cout << n << " is not a prime numb " << endl;*/

    // SUM OF EVEN NUMBER
    /*int n;
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n; i)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << sum << endl;*/

    // FARAHNITE TO CELCIUS (FORMULA -> C = (F - 32)*(5/9))
    float cel, far;
    cout << "Enter the value of fahrenheit" << endl;
    cin >> far;
    cel = 5 * (far - 32) / 9;
    cout << far << " Fahrenheit is equal to "
         << cel << " Centigrade";
}

int isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int num = 2; num < n; num++)
    {
        if (n % num == 0)
        {
            return false;
        }
    }
    return true;
}
