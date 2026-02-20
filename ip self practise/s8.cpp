#include <iostream>
using namespace std;
int main(){
    int num;
    cout<< "Number : " ; cin>> num;
    int rem;
    for ( ; num!=0; num = num/10){
        rem = num%10;
        if(rem%2==0){
        cout<<rem;}
    }
    return 0;
}
