#include<stdio.h>
#include<stdlib.h>
void create(int);
void search();
struct node
{
    int data;
    struct node *next;
};
struct node*head;
void main()
{
    printf("risha\n");
    int choice, item ,loc;
    do
    {
        printf("\n1.Create\n2.Search\n3.Exit\n4.Enter your choice?");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the item");
            scanf("%d",&item);
            create(item);
            break;
            case 2:
            search();
            case 3:
            exit(0);
            break;
            default:
            printf("Plz enter valid choice");
        }
    }
    while(choice!=3);
}

void create(int item)
{
    struct node *ptr=(struct node*) malloc(sizeof(struct node));
    struct node *temp;
    if(ptr==NULL)
    {
        printf("Overflow");
    }
    else{
        ptr->data=item;
        if(head==NULL)
        {
            head =ptr;
            ptr->next=head;
        }
        else{
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;

            }
            temp->next=ptr;
            ptr->next=head;
        }
        printf("Node inserted");
    }
}
void search()
{
    struct node *ptr;
    int item,i=0,flag=1;
    ptr=head;
    if(ptr==NULL)
    {
        printf("Empty list\n");
    }
    else
    {
        printf("Enter the item which you want to search");
        scanf("%d",&item);
        if(head->data==item)
        {
            printf("Item found at location %d",i+1);
            flag=0;
            return;
        }
        else
        {
while(ptr->next!=head)
{
    if(ptr->data==item)
    {
        printf("item found at location %d",i+1);
        flag=0;
        return;
    }
    else{
        flag=1;
    }
    i++;
    ptr=ptr->next;
}
        }
        if(flag!=0)
        {
            printf("Item not found");
            return;
        }

    }
}
