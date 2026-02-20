#include<iostream>
using namespace std;
int main ()
{
    double a=5.6;
    int b=a;
    int c=b++;
    double d=--a;
    cout << a << endl;

    cout << (int)a+a << endl;
    cout << b << endl;
    cout<< c<< endl;
    cout << d << endl;
    cout << (double)c+d<< endl;
    return 0;
}
