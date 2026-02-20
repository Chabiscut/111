#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    string str1= "Khalid";
    string str2= " Mujahid";
    string str3;
    str3=str1;
    cout << str3 << endl;
    str3= str1 + str2;
    cout << "Str1 + Str2: " << str3<< endl;
    char len1[]= "khalid";
    char len2[]= "Mujahid";
    cout << "Size of str1: " << sizeof(len1)<< endl;
    cout << "Size of str2: " << sizeof(len2) << endl;
    char name1[] = "Khalid";
    int l1= strlen(name1);
    char name2[] = "mujhaid";
    int l2= strlen(name2);
    cout <<"Lenth of name1: " <<  l1 << endl;
    cout <<"Lenth of name2: " <<  l2 << endl;

    return 0;
}
