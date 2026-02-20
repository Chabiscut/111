#include<iostream>
using namespace std;
int main ()
{
    int x[6]={19,20,21,22,23,24};
    int smallest=x[0];
    for(int i=0; i<6; i++)
    {
        if(smallest>x[i])
            smallest= x[i];
    }
    cout << "Smallest num is: " << smallest<<endl;
    return 0;
}
