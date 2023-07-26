/* 
    Here is 21 type basic Pattern.
    This program made with switch case.
    This made by Sultanum Mobin.
    Facebook id  https://www.facebook.com/smsultan76 
*/
#include<stdio.h>
int main(){
    int i,j,k,n,ch,count=1;
    char s[100];
    printf("Press 1:\n1\n2 2\n3 3 3 \nPress 2: Or Inverse Press 3: Or Character Press 4:\n1\n1 2\n1 2 3 \nPress 5:\n1\n2 3\n4 5 6\nPress 6: Or Character Press 7:\n1\n1 0\n1 0 1\nPress 8: Or alt Press 9:\n1\n1 2\n1 2 3 \n1 2\n1\nPress 10: Or alt Press 11: Or Inverse Press 12:\n  1\n 1 2\n1 2 3\nPress 13: Or Inverse Press 14:\n    1\n  1 2\n1 2 3\nPress 15: Rectengular Frame\nPress 16: Triangle-1 Flip Press 17\nPress 18: Triangle-2 Flip Press 19\nPress 20: X shape\nPress 21:Print any string in pattern.\n");
    while(1){
        printf("Enter choise:  ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1; i<=n; i++){
                for(j=1; j<=i; j++)printf("%d ",i);
                printf("\n");
            }break;
        case 2:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1; i<=n; i++){
                for(j=1; j<=i; j++)printf("%d ",j);
                printf("\n");
            }break;
        case 3:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=n; i>=1; i--){
                for(j=1; j<=i; j++)printf("%d ",j);
                printf("\n");
            }break;
        case 4:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                for(j=0;j<=i;j++)printf("%c ",j+65);
                printf("\n");
            }break;
        case 5:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++)printf("%d ",count++);
            printf("\n");
        }break;
        case 6:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++)printf("%d ",j%2);
            printf("\n");
        }break;
        case 7:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                        if(j%2==1)printf("A ");
                        else printf("B ");
                }printf("\n");
        }break;
        case 8:
        printf("How many Number?");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++)printf("%d ",j);
                printf("\n");
        }for(i=n-1; i>=1; i--){
                for(j=1; j<=i; j++)printf("%d ",j);
                printf("\n");
            }break;

        case 9:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++) printf("  ");
            for(k=1;k<=i;k++) printf("%d ",k);
            printf("\n");
        }for(i=n-1;i>=1;i--){
            for(j=1;j<=n-i;j++) printf("  ");
            for(k=1;k<=i;k++) printf("%d ",k);
            printf("\n");
        }break;
        case 10:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++) printf(" ");
            for(k=1;k<=i;k++) printf("%d ",k); printf("\n");
        }break;
        case 11:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i+=2){
                for(j=1;j<=n-i;j++)printf(" ");
                for(j=1;j<=i;j++)printf("%d ",j); printf("\n");
            }break;
        case 12:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=n;i>=1;i--){
                for(j=1;j<=n-i;j++)printf(" ");
                for(j=1;j<=i;j++)printf("%d ",j); printf("\n");
            }break;
        case 13:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
                for(j=1;j<=n-i;j++)printf("  ");
                for(j=1;j<=i;j++)printf("%d ",j); printf("\n");
            }break;
        case 14:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=n;i>=1;i--){
                for(j=1;j<=n-i;j++)printf("  ");
                for(j=1;j<=i;j++)printf("%d ",j); printf("\n");
            }break;
        case 15:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==1||i==n||j==1||j==n) printf("* ");
                    else printf("  ");
                } printf("\n");
            }break;
        case 16:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==n||j==1||j==i) printf("* ");
                    else printf("  ");
                } printf("\n");
            }break;
        case 17:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==1||j==n||i==j) printf("* ");
                    else printf("  ");
                } printf("\n");
            }break;
        case 18:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==1||j==1||i+j==n+1) printf("* ");
                    else printf("  ");
                } printf("\n");
            }break;
        case 19:
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==n||j==n||i+j==n+1) printf("* ");
                    else printf("  ");
                } printf("\n");
            }break;
        case 20:
        printf("How many Line:  ");
        scanf("%d",&n);
            for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                    if(i==j||i+j==n+1) printf("* ");
                    else printf("  ");
                } printf("\n");
            }break;
        case 21:
        printf("Which String do you want to print?");
        fgets(s,sizeof(s),stdin);
        gets(s);
        printf("How many Line:  ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++) printf("%s ",s); printf("\n");
        }break;
        default: printf("Enter valid option.\n");
        }}
    return 0;
        }
