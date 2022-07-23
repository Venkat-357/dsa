#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int insert_beg();
int insert_end();
int insert_pos();
int delete_beg();
int delete_end();
int delete_pos();
int display();
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL;
int insert_beg()
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter the data:\n");
    scanf("%d",&newnode->data);
    if(newnode==0)
    {
        printf("out of memory\n");
        exit(0);
    }
    if(head==0)
    {
        head=newnode;
        printf("the first element is successfully inserted\n ");
    }
    else
    {
        newnode->next=head;
        head=newnode;
        printf("the element is successfully inserted at begining\n");
    }
    return 0;
}
int insert_end()
{
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter the data:\n");
    scanf("%d",&newnode->data);
    temp=head;
    if(newnode==0)
    {
        printf("out of memory\n");
        exit(0);
    }
    if(head==0)
    {
        head=newnode;
        printf("the first element is successfully inserted\n ");
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        printf("the element is successfully inserted at end\n");
    }
    return 0;
}
int insert_pos()
{
    int pos,i;
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter the data:\n");
    scanf("%d",&newnode->data);
    printf("enter the position:\n");
    scanf("%d",&pos);
    temp=head;
    if(newnode==0)
    {
        printf("out of memory\n");
        exit(0);
    }
    if(pos==1)
    {
        insert_beg();
    }
    else if(head==0)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
         printf("the element is successfully inserted at given position\n");  
    }
    return 0;
}
int delete_beg()
{
    struct node*temp;
    temp=head;
    if(head==0)
    {
        printf("the list is empty\n");
    }
    else
    {
        head=head->next;
        printf("the element deleted is %d",temp->data);
        free(temp);
    }
    return 0;
}
int delete_end()
{
    struct node*temp,*temp1;
    temp=temp1=head;
    if(head==0)
    {
        printf("the list is empty\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        printf("the element deleted is %d",temp->data);
        free(temp);
    }
    return 0;
}
int delete_pos()
{
    int pos,i;
    struct node*temp,*temp1;
    temp=temp1=head;
    printf("enter the position:\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        delete_beg();
    }
    else if(head==0)
    {
        printf("the list is empty\n");
    }
    else
    {
        for(i=0;i<pos;i++)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;
        temp->next=NULL;
        printf("the element deleted is %d",temp->data);
        free(temp);
    }
    return 0;
}
int display()
{
    struct node*temp;
    temp=head;
    if(head==0)
    {
        printf("the list is empty\n");
    }
    else
    {
        printf("the list elements are:\n");
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
    return 0;
}
int main()
{
    int choice;
    while(choice!=8)
    {
        printf("1.insert at begin\n2.insert at end\n3.insert at pos\n4.delete at begin\n5.delete at end\n6.delete at pos\n7.display\n8.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :insert_beg();
            continue;
            case 2 :insert_end();
            continue;
            case 3 :insert_pos();
            continue;
            case 4 :delete_beg();
            continue;
            case 5 :delete_end();
            continue;
            case 6 :delete_pos();
            continue;
            case 7 :display();
            continue;
            case 8 :exit(0);
            break;
            default:printf("enter a valid choice:\n");
            continue;
        }    

        }
        return 0;
    }
