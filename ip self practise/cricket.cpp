#include<iostream>
using namespace std;
int main ()
{
    int last_4_match_run;
    float avg_run_last_4_matches;
    float avg_run_2022;
    string player_name;
    cout << "My favourite players name is: " << endl;
    cin >> player_name;
    cout << "Enter the total run of shakib al hasan in last 4 ODI matches: " << endl;
    cin >> last_4_match_run;
    avg_run_last_4_matches = last_4_match_run / 4;
    cout << "Avg run of shakib al hasan in the last 4 matches: "<< endl;
    cout << avg_run_last_4_matches << endl;
    cout << "enter avg run of shakib al hasan in 2022: " << endl;
    cin >> avg_run_2022;
    if(avg_run_last_4_matches>avg_run_2022)
    {
        cout << "performace of shakib al hasan is improving" << endl;
    }
    else
        cout << "performance of shakib al hasan is deteriorating" << endl;

    return 0;
}
