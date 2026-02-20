#include<iostream>
using namespace std;
int main ()
{
     int x[]={19,20,21,22,23,24};
     int arrayMemorySize = sizeof(x);
     cout << "Total memory in bytes: " << arrayMemorySize << endl;

     int sizeOfArray = sizeof(x)/4;
     cout << "number of elements: " << sizeOfArray << endl;
     return 0;
}
