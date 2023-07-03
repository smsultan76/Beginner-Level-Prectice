#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1)
    return 1;
    else
    return n*factorial(n-1);
}
main(){
     int f;
    cout<<"Enter number:";
    cin>>f;
    cout<<"Factorial of "<<f<<" is:\t"<<factorial(f);
}
