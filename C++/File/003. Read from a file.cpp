#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main(){
    ifstream file("file.txt");              // Open the file in reading mode
    if(file.is_open()){
        string Line;
        while(getline(file,Line)){          // Get input from file line by line untill line finished.
            cout<<Line<<endl;               // and show in console line by line
        }
        file.close();                       // Lastly need to close file.
    }
    else
        cout<<"File does not exist."<<endl;
}
