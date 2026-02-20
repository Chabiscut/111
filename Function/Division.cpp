#include<iostream>
using namespace std;
int divide(int a, int b);
int main()
{
    int number1,number2 , div;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    div = divide(number1, number2);
    cout << "Division is: " << div << endl;
    return 0;
}
int divide(int a , int b)
{
    return (a/b);
}

