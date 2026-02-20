#include<iostream>
using namespace std;
int main ()
{
   int x[6];
   cout << "Enter input from user: " << endl;
   for( int i=0; i<6; i++)
   {
       cin >> x[i];
   }
   int largest = 0;
   for(int i=1; i<6; i++)
   {
       if(largest<x[i])
        largest= x[i];
   }
   cout << "Largest num is: " << largest<< endl;
    return 0;
}
