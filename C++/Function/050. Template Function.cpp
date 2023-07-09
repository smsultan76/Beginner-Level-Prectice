#include<iostream>
#include<string>
using namespace std;
template <typename T>           // We can use 'class' keyword instead of 'typename'
T Display(T a){                 // Create template function variable 'a'
    cout<<a<<endl;              // We can do any spacific operation using spacific datatypes.
}
main(){
    Display(76);                // We can pass Integer data in Display function by creating template.
    Display(3.14159);           // We can pass Double/Float data in same Display function.
    Display('M');               // We can pass Character data in same Display function.
    Display("Sultan");          // We can pass String data in same Display function.
}
