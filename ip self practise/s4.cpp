#include<iostream>
using namespace std;
int main ()
{
    int i=1,sum=0;

    while(i<=200)
    {
        cout << i <<endl;
        sum = sum+i;
        i++;
    }
    cout<< "the sum of 1st 200 natural number: " << sum << endl;
    cout << "end of while loop" << endl;
    return 0;
}
