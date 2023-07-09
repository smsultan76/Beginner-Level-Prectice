#include<iostream>
using namespace std;
class Myclass{
    private:
    int Id = 101;
    string Name = "Sultan";
    void result(){
        cout<<"Passed"<<endl;
    }
    /*
    We made some private variable and private function in Myclass. We know we can use those only in Myclass.
    But a friend class Myfriend declare inside of Myclass. So now from external friend class we can access Myclass Property.
    Actually friend class is one kind of class(here Myfriend) which extands an another class(here Myclass).
    */
    public:
    friend class Myfriend;          // Here created friend class. It can access Myclass propertice.
};
class Myfriend{
    public:
    void Show(Myclass obj){         // Created object of Myclass in parameter section.
        cout<<obj.Id<<endl<<obj.Name<<endl;
        obj.result();
    }};
main(){
    Myclass pass;                   // Created object of Myclass.
    Myfriend obj;                   // Created object of friend class.
    obj.Show(pass);                 // Passing Myclass object in friend class function.
}
