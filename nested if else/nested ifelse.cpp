#include<iostream>
using namespace std;
int main ()
{
    int mark;
    cout << "enter mark: ";
    cin >> mark;
    if(mark>50)
    {
        if(mark>=90)
        {
            cout<< "A+" << endl;
        }
        else if(mark>=85)
        {
            cout << "A" << endl;
        }
        else if(mark>= 80)
        {
            cout << "B+" << endl;
        }
        else if(mark>=75)
        {
            cout << "B" << endl;
        }
        else if(mark>=70)
        {
            cout << "C+" << endl;
        }
        else if(mark>=65)
        {
            cout << "C" << endl;
        }
        else if(mark>=60)
        {
            cout << "D+" << endl;
        }
        else if(mark>=50)
        {
            cout << "D" << endl;
        }
    }
    else
    {
        cout << "fail" << endl;
    }

    return 0;
}
