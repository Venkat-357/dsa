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
    struct node*prev;
};
struct node*head=NULL;
int insert_beg()
{
    struct node*newnode,*temp,*temp1;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    if(newnode==NULL)
    {
        printf("out of memory\n");
        exit(0);
    }
    temp=temp1=head;
    printf("enter the data:\n");
    scanf("%d",&newnode->data);
    if(head==0)
    {
        head=newnode;
        printf("the first element is successfully inserted\n");
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
    struct node*newnode,*temp,*temp1;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    if(newnode==NULL)
    {
        printf("out of memory\n");
        exit(0);
    }
    temp=temp1=head;
    printf("enter the data:\n");
    scanf("%d",&newnode->data);
    if(head==0)
    {
        head=newnode;
        printf("the first element is successfully inserted\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        printf("the element is successfully inserted at end\n");
    }
    return 0;
}
int insert_pos()
{
    int pos,i;
    struct node*newnode,*temp,*temp1;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    if(newnode==NULL)
    {
        printf("out of memory\n");
        exit(0);
    }
    temp=temp1=head;
    printf("enter the data:\n");
    scanf("%d",&newnode->data);
    printf("enter the position:\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        insert_beg();
    }
    else if(head==0)
    {
        head=newnode;
        printf("the first element is successfully inserted\n");
    }
    else
    {
        for(i=0;i<pos;i++)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=newnode;
        temp->prev=newnode;
        newnode->next=temp;
        newnode->prev=temp1;
    }
    return 0;
}
int delete_beg()
{
    struct node*temp,*temp1;
    temp=temp1=head;
    if(head==0)
    {
        printf("the list is empty\n");
    }
    else
    {
        head=head->next;
        temp->next=NULL;
        temp->prev=NULL;
        printf("the element deleted is %d\n",temp->data);
        free(temp);
    }
    return 0;
}
int delete_end()
{
    struct node*temp,*temp1;
    temp=temp1=head;
    if(head==NULL)
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
        temp->prev=NULL;
        temp1->next=NULL;
        printf("the element deleted is %d\n",temp->data);
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
        for(i=0;i<=pos;i++)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->prev->next=temp1->next;
        temp->prev=temp1->prev;
        temp1->prev=NULL;
        temp1->next=NULL;
        printf("the element is delete from the given position is %d\n",temp1->data);
        free(temp1);
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



