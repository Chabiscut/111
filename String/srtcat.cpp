#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    char name1[]= "khalid";
    char name2[]= " Al mujahid";
    strcat(name1,name2);
    cout << name1;
    return 0;
}
