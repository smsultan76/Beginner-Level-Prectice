#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main(){
    ofstream file("file.txt", ios::app);        // Open the file in append mode
    if(file.is_open()){
        string name;
        cout<<"Input name to store:\n";
        getline(cin,name);
        file<<name<<endl;                      // Store data in file from user input.
        cout<<"Success"<<endl;
        file.close();                       // Lastly need to close file.
    }
    else
        cout<<"Faild to create file! "<<endl;
}
