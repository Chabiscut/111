/*Find Multiplication Table of any given Number
Sample Output:
Input a number to find it’s Multiplication Table:9*/
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "take an integar: ";
    cin >> n;
    for (int i=1; i<=10;i++)
        cout << n << "*" << i << "=" << n*i <<endl;
    return 0;
}
