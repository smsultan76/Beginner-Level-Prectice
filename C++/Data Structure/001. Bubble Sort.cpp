#include<iostream>
using namespace std;
void PrintArray(int Arr[], int size){
    for(int i=0;i<size ; i++){
        cout<<Arr[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int i, j, n, temp;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Number: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Bubble Sort: "<<endl;
    PrintArray(arr,n);
    //Applying Bubble Sort
    for(i=0 ;i<n;i++){
        for(j=0 ; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"After Bubble SOrt"<<endl;
    PrintArray(arr,n);
}
