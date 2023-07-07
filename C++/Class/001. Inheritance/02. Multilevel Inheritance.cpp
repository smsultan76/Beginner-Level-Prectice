#include<iostream>
using namespace std;
// Grandparent class
class Animal{
    public:
    void eat(){
        cout<<"The animal is eating."<<endl;
    }};    
// Parent class inheriting from the grandparent class
class Dog : public Animal {
    public:
    void bark() {
        cout<<"The dog is barking."<<endl;
    }};
// Child class inheriting from the parent class
class Bulldog : public Dog{
    public:
    void guard() {
        cout<<"The bulldog is guarding."<<endl;
    }};
main() {
        Bulldog obj;        // Create object for Grandparend class
        obj.eat();          // Inherited Function from the Animal class
        obj.bark();         // Inherited Function from the Dog class
        obj.guard();        // Function specific to the Bulldog class
    }
