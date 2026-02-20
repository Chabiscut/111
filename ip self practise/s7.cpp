#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<< "Enter name: "<< endl;
    for(int i=0;i<5;i++)
    {
        cin>>name;
    }
    cout << "The names are: " << endl;
    for(int i=0;i<5;i++)
    {
        cout << name << endl;
    }
    return 0;
}
