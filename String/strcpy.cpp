#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    char name1[]= "Mujahid";
    char name2[10] = "khalid";
    strcpy(name2,name1);
    cout << "Name2= " << name2;

    return 0;
}
