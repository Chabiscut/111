#include<iostream>
using namespace std;
int main ()
{
   int x[6];
   double sum=0, average;
   cout << "Enter elelments from user: " << endl;
   for(int i=0; i<=6; i++)
   {
       cin >> x[i];
   }
   for (int i=0; i<=6; i++)
   {
       sum = sum + x[i];
   }
   cout << "Sum is: " << sum << endl;
   average = sum/6;
   cout << "Average is: " << average << endl;

    return 0;

}
