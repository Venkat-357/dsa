#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head,*newnode,*temp;
void create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    int choice;
    head=0;
    while(choice!=0)
    {
        printf("enter data:");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=newnode;
            newnode->next=0;
            printf("\nnewnode is successfully entered\n");
        }
        else
        {
            newnode->next=head;
            head=newnode;
            printf("\nnewnode is successfully entered\n");
        }
        printf("\ndo you want to continue");
        scanf("%d",&choice);
    }
    return 0;
}
void delete_begin()
{
    temp=head;
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
       head=head->next;
       printf("node deleted is %d\n",temp->data);
       free(temp);
    }
    return 0;
}
void delete_end()
{
    temp=head;
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        printf("the node deleted is %d",temp->data);
        free(temp);
    }
    return 0;
}
void delete_pos()
{
    int pos,i;
    temp=head;
    printf("enter position:");
    scanf("%d",&pos);
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        if(pos>temp)
        {
            printf("enter valid position");
        }
        else
        {
            temp=head;
            while(i<pos)
            {
                temp=temp->next;
            }
            printf("element deleted is %d",temp->data);
            free(temp);
        }

    }
    return 0;
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",&temp->data);
        temp=temp->next;
    }
    return 0;
}
void main()
{
    int choice;
    while(choice!=5)
    {
        printf("1.create\n2.delete at begin\n3.delete at end\n4.delete at pos\n5.display\n6.exit\n");
        printf("\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :create();
            break;
            case 2 :delete_begin();
            break;
            case 3 :delete_end();
            break;
            case 4 :delete_pos();
            break;
            case 5 :display();
            break;
            case 6 :exit(0);
            break;
            default :printf("enter valid choice");
            break;
        }
    }
    return 0;
}
