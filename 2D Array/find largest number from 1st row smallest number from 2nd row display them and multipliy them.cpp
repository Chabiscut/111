#include<iostream>
using namespace std;
int main ()
{
    float a[2][4];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
        cout << "a[" << i << "][" << j << "]" << "=";
        cin >> a[i][j];
        }
    }
    cout << "display elements: "<< endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    float largest_first_row = a[0][0];
   float smallest_second_row= a[1][0];
   for(int j=0;j<4;j++)
   {
       if(a[0][j]>largest_first_row )
        largest_first_row = a[0][j];
   }
   for (int j=0;j<4 ; j++)
   {
       if(a[1][j]<smallest_second_row)
        smallest_second_row=a[1][j];
   }
   cout << "largest number from 1st row is: " << largest_first_row << endl;
   cout << "Smallest number from 2nd row is: " << smallest_second_row << endl;
   cout << "Multiplicatiom of largest num from 1sr and smallest number from 2nd row is: " << largest_first_row* smallest_second_row<<endl;

    return 0;
}
