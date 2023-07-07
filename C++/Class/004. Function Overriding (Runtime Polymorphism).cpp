#include<iostream>
using namespace std;
class Animals{
    public:
    void MakeSound(){
        cout<<"Animals can make sound"<<endl;
    }};
class Dog : public Animals{
    public:
    // Function Override
    void MakeSound(){
        cout<<"Dog : Ghew Ghew"<<endl;
}};
class Cat : public Animals{
    public:
    // Another Function Override
    void MakeSound(){
        cout<<"Cat : Meao Meao"<<endl;
}};
main(){
    // Calling Animal class's MakeSound Function
    Animals obj1;
    obj1.MakeSound();
    // Calling Dog class's MakeSound Function
    Dog obj2;
    obj2.MakeSound();
    // Calling Cat class's MakeSound Function
    Cat obj3;
    obj3.MakeSound();
}
