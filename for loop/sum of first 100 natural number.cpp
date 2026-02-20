//sum of first 100 natural number
#include <iostream>
using namespace std;
int main()
 {
    int sum=0,i;

   {
    for ( int i = 1; i <= 100; i++)


        sum=sum+i;
   }

    cout << "Sum of the first 100 natural numbers is: " << sum << endl;

    return 0;
}
