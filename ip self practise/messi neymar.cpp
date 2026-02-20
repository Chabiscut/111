#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "enter the number of recent football matches: ";
    cin >> n;

       int messiGoals=0;
       int neymarGoals=0;

    for (int i=1;i<=n;i++)
        {
        int messimatchGoals,neymarmatchGoals;
        cout << "Enter the number of goals scored by messi in math "<< i << ":" <<endl;
        cin>> messiGoals;
        messiGoals += messimatchGoals;

        cout << "Enter the number of goals scored by neymar in match " << i << ":" << endl;
        cin >> neymarGoals;
        neymarGoals += neymarmatchGoals;
        }

    float avg_messi_goals =static_cast<float>(messiGoals) / n;
    float avg_neymar_goals = static_cast<float>(neymarGoals) / n;

        cout << "Avg goals of messi: " << avg_messi_goals << endl;
        cout << "Ang goals of neymar: " << avg_neymar_goals << endl;

    if(avg_messi_goals > avg_neymar_goals)
      {

       cout << "messi is better than neymar" << endl;
      }
    else if(avg_messi_goals < avg_neymar_goals)
       {

        cout << "neymar is better than messi" << endl;
       }
    else
       {

        cout << "both are equal" << endl;
       }
        return 0;
}
