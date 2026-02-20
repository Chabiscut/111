#include<iostream>
using namespace std;
int main ()
{
     int choice;
     float quantity, cost;
     cout << "what type of gold do you want to purchase?" << endl;
     cout << "press 1 for 22-karat gold" << endl;
     cout << "press 2 for 24-karat gold" << endl;
     cin >> choice;
     switch(choice)
     {
     case 1:
        cout << "please input the quantity(gram) of 22 karat gold: " << endl;
        cin >> quantity;
        cost = quantity*22;
        break;
     case 2:
        cout << "please input the quantity(gram) of 24 karat gold: " << endl;
        cin >> quantity;
        cost = quantity*24;
        break;
     default :
        cout << "invalid choice.. 1 or 2 chap shala" << endl;

     }
     cout << "Cost in bdt: "<< cost<< "Taka"<< endl;
     char convertcost;
     float costusd;
     cout<< "do you want to convert the cost in us dollars?(Y/N)"<< endl;
     cin>>convertcost;
     if(convertcost=='Y' || convertcost=='y')
    {

     costusd = cost/110.24;
     cout << "total cost in usd: " << costusd << endl;
    }
      else if(convertcost=='N' || convertcost=='n')
        cout << "Thank you shopping korar jonno" << endl;
    else
        cout << "invalide input " << endl;
     return 0;
}
