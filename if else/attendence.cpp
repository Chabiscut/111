/*A student will not be allowed to sit for an exam if his/her attendance is less than 80%.

Take the following input from the user

a. Number of classes held.

b. Number of classes that were attended by the student.

Find out the attendance percentage for the student and show if the student will be allowed to sit for the exam or not. (Using If-else)
*/
#include<iostream>
using namespace std;
int main ()
{
    int classheld , attendedclass,attendenceparcentage;
    cout << "number of classes held: ";
    cin >> classheld;
    cout << "number of classes that were attednded by the student: ";
    cin >> attendedclass;
    cout << "attendencepercentage: " <<( float(attendedclass) /  float (classheld)) << endl;
    if(attendenceparcentage >0.8)
        cout << "allowed to sit for the exam" << endl;
    else
        cout << "not allowed to sit for the exam" << endl;
    return 0;
}
