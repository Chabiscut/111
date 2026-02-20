#include<iostream>
using namespace std;
int main ()
{
    char letter;
    cout << "enter a letter: ";
    cin >> letter;
    letter = tolower(letter);
    switch(letter){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout << "vowel";
    break;
default :
    cout << "consonant";
    }
    return 0;
}
