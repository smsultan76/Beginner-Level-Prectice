#include<stdio.h>
void PrintArray(int Arr[],int size){
    for(int i=0;i<size; i++){
        printf("%d\t",Arr[i]);
    }printf("\n");
}
int main(){
    int i,j,n,min,temp;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Number:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Before sort:\n");
    PrintArray(arr,n);
    for(i=0; i<n-1; i++){
        min = i;                    // Let First has minimum value of the array
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min =j;             // If found minimum value more6 thah that(first Min) change location to that.
            }
        }
        // Swap minimum value with present index address.
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("After Selection Sort:\n");
    PrintArray(arr,n);
}
