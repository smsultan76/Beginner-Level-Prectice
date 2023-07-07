#include<iostream>
using namespace std;
// First parent class
class Swim{
    public:
    void swim(){
        cout<<"Duck is swimming."<<endl;
}};
// Second parent class
class Fly{
    public:
    void fly(){
        cout<<"Duck is flying."<<endl;
}};
// Child class Inheriting multiple parent class
class Duck : public Swim , public Fly{
    public:
    void duck(){
        cout<<"Ducks are a group of species of water birds"<<endl;
}};
main(){
    Duck obj;           // Creating object of child class inheriting multiple parent class
    obj.duck();         // Calling Function of child class
    obj.fly();          // Calling Function of a parent class
    obj.swim();         // Calling Function of another parent class
}
