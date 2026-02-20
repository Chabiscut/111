#include<iostream>
using namespace std;
int main()
{

    int x[6];
    cout << "Enter input from user: " << endl;

    for(int i=0; i<6; i++)
    {
        cin >> x[i];
    }
    int smallest= x[0];
    for(int i=1; i<6; i++)
    {
        if(smallest>x[i])
            smallest=x[i];
    }
    cout << "smallest is: " << smallest<< endl;
    return 0;
}
