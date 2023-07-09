#include<iostream>
using namespace std;
main(){
    double a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    try{
    if(b==0)
        throw runtime_error("Can't Divided by zero.");
    double result=a/b;
    cout<<result;
    }catch(runtime_error e){
        cout<<e.what();
    }
}
