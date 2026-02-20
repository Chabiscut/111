#include<iostream>
using namespace std;
int main ()
{
    int number;
    cout << "enter an integer number: ";
    cin >> number;
    if(number>0)
       {
        cout << "the number is: " << number << endl;
        cout << "number is positive" << endl;
       }
    else if(number<0)

       {
        cout << "the number is" << number << endl;
        cout << "number is negetve" << endl;
       }
    else
    {
        cout << "the number is: " << number << endl;
        cout << "number is zero" << endl;
    }
    return 0;
}
