#include<iostream>
using namespace std;
int main ()
{
    int physics,chemistry,math;
    char physicsgrade, chemistrygrade, mathgrade;
    cout << "physics: ";
    cin >> physics;
    cout << "Chemstry: ";
    cin>> chemistry;
    cout << "Math: ";
    cin>> math;

    if(physics>=80 && physics<90)
       {physicsgrade = 'A+';}
    else if(physics>=70 && physics <79.99)
        {physicsgrade = 'A';}
    else if(physics>=60 && physics<69.99)
        {physicsgrade = 'B+';}
    else if(physics>=50 && physics<59.99)
        {physicsgrade = 'B';}
    else
        {physicsgrade = 'F';}



    if(chemistry>=80 && chemistry<90)
      {chemistrygrade = 'A+';}
    else if(chemistry>=70 && chemistry <79.99)
       {chemistrygrade = 'A';}
    else if(chemistry>=60 && chemistry<69.99)
        {chemistrygrade = 'B+';}
    else if(chemistry>=50 && chemistry<59.99)
       {chemistrygrade = 'B';}
    else
        {chemistrygrade ='F';}



    if(math>=80 && math<90)

       {mathgrade = 'A+';}
    else if(math>=70 && math <79.99)
       {mathgrade = 'A';}
    else if(math>=60 && math<69.99)
       {mathgrade = 'B+';}
    else if(math>=50 && math<59.99)
       {mathgrade = 'B';}
    else
       {mathgrade = 'F';}

    cout << "grade: " << endl;
    cout << "physics grade: " << physicsgrade << endl;
    cout << "chemistry grade: " << chemistrygrade << endl;
    cout << "math grade: " << mathgrade << endl;


    return 0;
}
