// Find the largest elelements of the array
#include<iostream>
using namespace std;
int main ()
{
    int x[6]= {19,20,21,200,23,24};
    int largest= x[0]; // 19
    for (int i=1; i<6 ; i++)
    {
        if(largest < x[i])
        largest = x[i];

    }
    cout << "largest : " << largest<< endl;
    return 0;
}
