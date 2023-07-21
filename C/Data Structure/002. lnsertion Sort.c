#include<stdio.h>
void PrintArray(int Arr[],int size){
    for(int i=0;i<size; i++){
        printf("%d\t",Arr[i]);
    }printf("\n");
}
int main(){
    int i,j,n,temp;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Number:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Before sort:\n");
    PrintArray(arr,n);
    for(i=1; i<n; i++){
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    printf("After Insertion Sort:\n");
    PrintArray(arr,n);
}
