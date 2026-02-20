#include<iostream>
using namespace std;
int main ()
{
    int salary,year;
    cout << "salary: ";
    cin  >> salary;
    cout << "year: ";
    cin >> year;
    if(year >=5)
    {
        cout << "will get bonous" << endl;
        cout << "net bonous : " << (salary*0.05) << endl;
    }
    else
        cout << "no bonous" << endl;
    return 0;
}
