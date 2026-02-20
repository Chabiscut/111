/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.

Ask user for their salary and year of service and print the net bonus amount.*/

#include<iostream>
using namespace std;
int main ()
{
  int salary,year;
  cout << "Enter amount and year :";
  cin >> salary >> year;
  if(year>=5)
  {
  cout << "will get bonous" << endl;
  cout << "net bonous: " << (salary * 0.05) << endl;
  }
  else
  {
  cout << "will not get bonous" << endl;
  }
  return 0;
}
