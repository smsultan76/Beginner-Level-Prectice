#include<iostream>
using namespace std;
// Parent class
class Animals{
    public:
    void Eat(){
        cout<<"Animals are eating."<<endl;
    }};
// Child class Inheriting Animal class
class Dog : public Animals{
    public:
    void dog(){
        cout<<"Dog is Barking."<<endl;
    }};
// Another Child class Inheriting Animal class
class Cat : public Animals{
    public:
    void cat(){
        cout<<"Cat is Meaowing."<<endl;
    }};
main(){
    Dog obj1;           // Creating object of 1st child class
    obj1.dog();         // Calling dog class Function by obj1
    obj1.Eat();         // Calling Animal class(Parent class) Function by obj1
    Cat obj2;           // Creating object of 2nd child class
    obj2.cat();         // Calling Cat class Function by obj2
    obj2.Eat();         // Calling Animal class(Parent class) Function by obj2
}
