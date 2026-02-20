#include<iostream>
using namespace std;
int substruction(int a, int b);
int main()
{
    int number1,number2 , sub;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    sub = substruction(number1, number2);
    cout << "Substruction is: " << sub << endl;
    return 0;
}
int substruction(int a , int b)
{
    return (a-b);
}

