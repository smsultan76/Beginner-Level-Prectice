#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;          // This points on next node's memory address.
};
int main(){
    // Creating struct node variable we declear 3 variable to keep 3 data.
    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;
    // Dynamicaly allocat memory for those variable
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    // We assign value in data variable for individual node(a,b,c).
    a->data = 10;       
    b->data = 20;
    c->data = 30;
    // Poiting next node data from previous node.
    a->next = b;
    b->next = c;
    c->next = NULL;
    // Now Travarsing those data.
    while (a != NULL){
        printf("%d\n",a->data);
        a= a->next;                 // That change next node data and pointer.
    }
    return 0;    
}
