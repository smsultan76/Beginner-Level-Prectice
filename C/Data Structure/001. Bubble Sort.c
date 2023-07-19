#include<stdio.h>
void PrintArray(int Arr[],int size){
    for(int i=0;i<size; i++){
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}
int main(){
    int i,j,n,temp;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Number: \n",n);
    for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }
    printf("Before Bubble Sort:\n");
    PrintArray(arr,n);
    // Applying Bouble Sort
    for (i = 0; i < n; i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("After Bubble Sort:\n");
    PrintArray(arr,n);
    return 0;
}
