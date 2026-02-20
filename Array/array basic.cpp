#include<iostream>
using namespace std;
int main()
{
    int x[6] = {19,20,21,22,23,24};
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
    cout << x[3] << endl;
    cout << x[4] << endl;
    cout << x[5] << endl;
    cout << "sum = " <<x[0] + x[1] + x[2] + x[3] + x[4] + x[5] << endl;
    cout <<"-----------" << endl;
    //displaying array elelments using for loop
    for(int i=0;i<6;i++)
        cout << x[i]<< endl;

    return 0;
}
