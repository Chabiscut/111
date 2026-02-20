#include<iostream>
using namespace std;
int multi(int a, int b);
int main()
{
    int number1,number2 , mul;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    mul = multi(number1, number2);
    cout << "Multiplication is: " << add << endl;
    return 0;
}
int multi(int a , int b)
{
    return (a*b);
}

