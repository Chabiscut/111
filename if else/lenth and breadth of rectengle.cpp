/*Take values of length and breadth of a rectangle from user and check if it is square or not.*/
#include<iostream>
using namespace std;
int main ()
{
    float length,breadth;
    cout << "take value of length: ";
    cin >> length;
    cout << "take value of breadth: ";
    cin >> breadth;
    if(length==breadth)
        cout << "it is a square" << endl;
    else
        cout << "it is not a square" << endl;
    return 0;
}
