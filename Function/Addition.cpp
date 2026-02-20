#include<iostream>
using namespace std;
int addition(int a, int b);
int main()
{
    int number1,number2 , add;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    add = addition(number1, number2);
    cout << "Addition is: " << add << endl;
    return 0;
}
int addition(int a , int b)
{
    return (a+b);
}
