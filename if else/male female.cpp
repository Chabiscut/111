/*Take a character as input through the keyboard. Write a program to find out whether the gender is Male or Female. (Using If-else)

Inputs: take input ‘M’ or ‘m’ for male and take input ‘F’ or ‘f’ for female
*/
#include<iostream>
using namespace std;
int main ()
{
    char gender;
    cout << "Enter a letter: ";
    cin >> gender;
    if(gender=='m'|| gender=='M')
    {
        cout << "gender is male" << endl;
    }
    else if(gender=='f'||gender=='F')
    {
        cout << "gender is female" << endl;
    }
    else
    {
        cout << "Hijla" << endl;
    }
    return 0;
}
