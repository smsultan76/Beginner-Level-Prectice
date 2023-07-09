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
    But a friend class Myfriend declear inside of Myclass. So now from external friend class we can access Myclass Property.
    Actually friend class is one kind of class(here Myfriend) which extands an another class(here Myclass).
    */
    public:
    friend class Myfriend;          // Here created friend class. It can access Myclass propertice.
};
class Myfriend{
    public:
    void Show(){
        Myclass obj;                // Here we can Creating obj of Myclass. Because it is friend class.
        cout<<obj.Id<<endl<<obj.Name<<endl;
        obj.result();
    }};
main(){
    Myfriend obj;                   // Created object of friend class
    obj.Show();                     // Calling friend class function
}
