#include<iostream>
using namespace std;
void PrintArray(int Arr[],int n){
    for(int i=0; i<n; i++)
        cout<<Arr[i]<<"\t";
    cout<<endl;
}
void SelectionSort(int Arr[],int n){
    int i,j,Min,temp;
    for(i=0;i<n-1; i++){
        Min = i;                // Let First has minimum value of the array
        for(j=i+1; j<n; j++){
            if(Arr[j]<Arr[Min]){
                Min = j;        // If found minimum value more thah that(first Min) change location to that.
            }
        }
        // Swap minimum value with present index address.
        temp = Arr[Min];
        Arr[Min] = Arr[i];
        Arr[i] = temp;
    }
}
int main(){
    int n,i;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int Arr[n];
    cout<<"Enter "<<n<<" Number:"<<endl;
    for(i=0;i<n;i++)
        cin>>Arr[i];
    cout<<"Before Sort:"<<endl;
    PrintArray(Arr,n);
    SelectionSort(Arr,n);
    cout<<"After Selection Sort:"<<endl;
    PrintArray(Arr,n);
}
