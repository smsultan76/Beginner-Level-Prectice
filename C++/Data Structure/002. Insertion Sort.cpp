#include<iostream>
using namespace std;
int i, j, n, temp;
void InsertionSort(int arr[]){
    for(i=1; i<n; i++){
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void PrintArray(int Arr[]){
    for(i=0; i<n; i++){
        cout<<Arr[i]<<"\t";
    }cout<<endl;
}
int main(){
    cout<<"Enter size of Array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Number:"<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Before sort:\n";
    PrintArray(arr);
    InsertionSort(arr);
    cout<<"After Insertion sort:\n";
    PrintArray(arr);
}
