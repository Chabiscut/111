#include<iostream>
using namespace std;
int main ()
{
    int annualsalary;
    int totalsales;
    int bonus;
    cout << "Enter the anual salary if the employee: ";
    cin >> annualsalary;
    cout << "Enter the cost of sold mangoes by the employee in 2022: ";
    cin >> totalsales;
    if(totalsales>15000)
        {bonus = .24*annualsalary;
    cout << "bonus for the empolyee: " << bonus << endl;
        }
    else
            cout << "ja shalar put tui pabi na bonus" << endl;
    return 0;
}
