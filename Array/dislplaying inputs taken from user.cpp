#include<iostream>
using namespace std;
int main()
{
    int x[6];
    cout << "Enter elelments from user: "<< endl;
    for(int i=0; i<6; i++)
       {
          cin >> x[i];
       }
    cout << "displayng elements: "<< endl;
    for(int i=0; i<6; i++)

       {
        cout << x[i] << endl;
       }
    return 0;
}
