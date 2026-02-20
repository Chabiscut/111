#include<iostream>
using namespace std;
int main ()
{
    int x[6]={19,20,21,22,23,24};
    int sum=0;
    for(int i=0; i<6; i++)
       {
        sum = sum + x[i];

       }
        cout << "sum of elelments: " << sum << endl;
    return 0;
}
