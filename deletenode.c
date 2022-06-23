#include<stdio.h>
#include<stdlib.h>
#define NULL ((void *)0)

typedef struct nodetype
{
    int info;
   struct nodetype *link;
}node;

int main()
{
    printf("risha\n");
    node* create();
    int traverse(node*);
    int deleteitem(node**,int);
    node *head,*ptr;
    int item;
    head=create();
    printf("Linked list before deletetion\n");
    traverse(head);
    printf("Enter info to be Delete from node:");
    scanf("%d",&item);
    deleteitem(&head,item);
    printf("Linked list after deletetion\n");
    traverse(head);
    printf("\n----End of program----\n");
    ptr=head;
    while (ptr != NULL)
    {
        ptr = ptr->link;
        free(head);
        head = ptr;
    }
     return 0;
}
node* create() 
{
    node *ptr,*head=NULL;
    char ch='y';
    int data;
    while (ch=='y'|| ch=='Y')
    {
        if(head==NULL){
            head=(node*)malloc(sizeof(node)); 
            ptr=head;
        }
        else
        {
            ptr->link=(node*)malloc(sizeof(node));
            ptr=ptr->link;
        }
        printf("Enter info of new node:\t");
        scanf("%d",&data);
        ptr->info=data;
        fflush(stdin);
        printf("Want to continue : (y or N)=\n");
        scanf("%c",&ch);
    }
    ptr->link=NULL;
    return (head);
}
int traverse(node *head)
{
    node* ptr=head;
    while(ptr != NULL){
    printf("\n Info of node is :\t%d",ptr->info);
    ptr=ptr->link;
    }
    return;
}
int deleteitem(node** head,int item) 
{
    node *ptr, *prevloc, *loc;
    if(*head==NULL)
    {
        printf("underflow");
        return;
    }
    ptr=*head;
    prevloc=NULL;
    while((ptr != NULL)&&(item!=ptr->info))
    {
        prevloc=ptr;
        ptr=ptr->link;
    }
    if(item==ptr->info)
    {
        loc=ptr;
    }
    else{
       printf("Item not found,exit without deletion\n");
       return;
    }
    if(prevloc==NULL){
        *head=(*head)->link;
    }
    else{
        prevloc->link=loc->link;
    }
    free(loc);
}
