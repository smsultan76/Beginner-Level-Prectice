#include<iostream>
using namespace std;
class Person{
    private:            //Private variable, can't access directly from main function.
    string name;
    int age;
    public:
    void SetPerson(string name, int age){   //This function set private variable value.
        this->name=name;        //Both variable Name are same(in class and function) that's why this keyword used with selection Operator(->).
        this->age=age;
    }
    void GetPerson(){           // This function used for show the value of private variable.
        cout<<"Name: "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
main(){
    Person ps;                      //Create an object of exist class.
    ps.SetPerson("Sultan", 22);     //Calling function to set value.
    ps.GetPerson();                 //Calling function to Display value.
}
