#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=1;
    cout << "take an integer: ";
    cin >> n;
    while(i<=10)
    {
        cout << n << "*"<< i << "=" << n*i << endl;
        i++;
    }
    return 0;
}
