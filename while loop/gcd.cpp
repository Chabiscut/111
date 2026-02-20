#include<iostream>
using namespace std;
int main ()
{
    int a,b,mod;
    cout << "enter 2 non negatve number: ";
    cin>>a;
    cin>>b;
    while(b!=0)
{
    mod = a%b;
    a=b;
    b=mod;

}
     cout << "gcd is: " << a << endl;
    return 0;
}
