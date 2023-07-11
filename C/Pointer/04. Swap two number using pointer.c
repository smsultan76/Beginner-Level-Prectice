#include<stdio.h>
void swap(int *n1,int *n2){
    printf("Just enterd In swap Function:\n%d\t%d\n",*n1,*n2);

    int temp=*n1;
    *n1=*n2;
    *n2=temp;

    printf("Now Existing from swap Function:\n%d\t%d\n",*n1,*n2);
}
int main(){
    int num1,num2;
    printf("Enter two number:\n");
    scanf("%d%d",&num1,&num2);              // Getting two Number from user.
    printf("Your Entered Number:\n%d\t%d\n",num1,num2);

    swap(&num1,&num2);                  // Passing address of num1 &num2 variable

    printf("Lastly your Number Permanently swaped:\n%d\t%d\n",num1,num2);
    return 0;
}
