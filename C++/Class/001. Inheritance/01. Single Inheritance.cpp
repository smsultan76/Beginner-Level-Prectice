#include<iostream>
using namespace std;
//Parent class
class Animals{
    public:
    void Dog(){
        cout<<"Ghew Ghew"<<endl;
    }
};
//Child class (Cat class inherited Animal class)
class Cat:public Animals{
    public:
    void cat(){
        cout<<"Meaw Meaw"<<endl;
    }
};
main(){
    Cat obj;            //We create object of child class. Then we can access child class propertice and also parent class propertics(Punlic).
    obj.cat();          //Calling child class Function
    obj.Dog();          //Also we can call parent class Function beacause it Inherited.
}
