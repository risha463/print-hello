#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* next;
};
struct node* last=NULL;
int insertAtFront()
{
    int data;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data to be inserted:");
    scanf("%d",&data);
    if(last==NULL)
    {
        temp->info=data;
        temp->next=temp;
        last=temp;
    }
    else
    {
        temp->info=data;
        temp->next=last->next;
        last->next=temp;
    }
}
int viewlist()
{
    if(last==NULL)
    {
    printf("list is empty");
    }
    else
    {
        struct node* temp;
        temp=last->next;
    do
    {
        printf("data =%d",temp->info);
        temp=temp->next;
    }
    while(temp!=last->next);
    }
}
int main()
{
    printf("risha\n");
    insertAtFront();
    insertAtFront();
    insertAtFront();
    viewlist();
    return 0;
}
