#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main(){
    ofstream file;                      // ofstream use for create or write in a file.
    file.open("new.txt");               // If file exist, then open it. Or create a file on this name.
    if(file.is_open()){
        file<<"Hello I am Sultan.\n";       // Input String on file.

        // Now this process make input from user.
        string str;
        cout<<"Input data to store in file:\n";
        getline(cin,str);
        file<<str;                          // this make string value write on file.       
        cout<<"Success";
    }
    else
        cout<<"Failed to create file."<<endl;

    file.close();                       // Lastly need to close file.
}
