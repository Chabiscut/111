#include<iostream>
using namespace std;
int main ()
{
    int i=1,sum=0;

    while(i<=100)
    {
        cout << i << endl;
        sum = sum + i;
       i++;
    }
    cout << "sum of first 100 natural numbers: " << sum << endl;
    cout << "end of while loop" << endl;
    return 0;
}
