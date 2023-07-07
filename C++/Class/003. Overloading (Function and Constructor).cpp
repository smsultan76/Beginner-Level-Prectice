#include<iostream>
using namespace std;
class Overloading{
    public:
    // Constructor Overloading
    Overloading(int l,int w){
        cout<<"Area of Rectengle= "<<l*w<<endl;
    }
    Overloading(double r){
        cout<<"Area of Circle= "<<3.14159*r*r<<endl;
    }
    // Function Overloading
    void add(int a, int b){
        cout<<"Sum of two number= "<<a+b<<endl;
    }
    void add(int a, int b, int c){
        cout<<"Sum of Three number= "<<a+b+c<<endl;
    }};
main(){
    // Calling Overloaded constructor
    Overloading obj1(4,7);
    Overloading obj2(3);
    // Calling Overloaded Function, We can use obj1 or obj2 object for calling Function
    obj1.add(12,13);
    obj1.add(12,13,14);
}
