#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
    {
        cout << "a[" << i << "][" << j << "]" << "=";
        cin >> a[i][j];
    }
    }
    cout << "display matrix: "<< endl;

   for (int i=0;i<3;i++){
    for (int j=0;j<3;j++)
   {
       cout << a[i][j] << " ";
   }
   cout << endl;
   }
   cout << "Transpose matrix is: " << endl;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
   {
       cout << a[j][i]<< " ";
   }
   cout<< endl;
   }
    return 0;
}
