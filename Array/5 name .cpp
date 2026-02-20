#include<iostream>
using namespace std;
int main ()
{

    string names[5];
    cout << "enter 5 name: " << endl;
    for(int i=0;i<5 ; ++i)
         {
             cin >> names[i];
         }
         cout << "the names are: ";
    for(int j=0; j<5 ; ++j)
         {
             cout << names[j] << " ";
         }

    return 0;

}
