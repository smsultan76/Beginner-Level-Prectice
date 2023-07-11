#include<stdio.h>
int sum(int *Arr,int size){             //Gettig main function array as pointer
        int sum=0;
    for(int i=0;i<size;i++){
        sum+=*(Arr+i);
    }
    return sum;
}
int main(){
    int n,i,result;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    result = sum(arr,n);
    printf("Sum of array element: %d",result);
}
