/*Take any letter input through the keyboard. Write a program to find out whether it is a vowel or a consonant.
*/
#include<iostream>
using namespace std;
int main ()
{
    char letter;
    cout << "enter a letter: ";
    cin >> letter;
    letter = tolower(letter);
    if(letter=='a'|| letter == 'e'|| letter== 'i'|| letter=='o'||letter=='u')
    {
        cout << "letter is vowel" << endl;
    }
    else
    {
        cout << "letter is consonant" << endl;
    }
    return 0;
}


