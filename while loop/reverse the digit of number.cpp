#include<iostream>
using namespace std;
int main ()
{
    int number,right_digit;
    cout << "enter a number: ";
    cin>> number;
    while(number!=0){
        right_digit=number%10;
        cout<< right_digit;
        number = number/10;
    }
        return 0;
}
