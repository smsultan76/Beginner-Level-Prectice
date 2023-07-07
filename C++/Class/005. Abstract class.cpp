#include<iostream>
using namespace std;
class Animals{
    public:
    virtual void MakeSound()=0;     //Pure Virtual Function
};
class Dog : public Animals{
    public:
    // Abstruct Function must have to use if a function Inherite an Abstract class
    void MakeSound() override{
        cout<<"Dog : Ghew Ghew"<<endl;
    }};
class Cat : public Animals{
    public:
    // Abstruct Function must have to use if a function Inherite an Abstract class
    void MakeSound() override{
        cout<<"Cat : Meow Meow"<<endl;
    }};
main(){
    Animals *obj;               // Can't make object of an Abstract class But can make by pointer
    Dog obj1;                   // Create object every Inheritance class
    Cat obj2;
    obj = &obj1;                // obj pointer useing for hold child class object mamory address
    obj -> MakeSound();         // Call Function by pointer and selection operator
    obj = &obj2;
    obj -> MakeSound();
    
}
