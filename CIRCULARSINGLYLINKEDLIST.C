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
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    printf("enter data:\n");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
        printf("the first node is successfully inserted\n");
    }
    else
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
        head=newnode;
        printf("the newnode is successfully inserted at begining\n");
    }
    return 0;
}
int insert_end()
{
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    printf("enter data:\n");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
        printf("the first node is successfully inserted\n");
    }
    else
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("the newnode is successfully inserted at end\n");
    }
    return 0;
}
int insert_pos()
{
    int pos,count=1,i;
    struct node*newnode,*temp,*temp1,*temp2;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp2=temp1=temp=head;
    printf("enter the position:\n");
    scanf("%d",&pos);
    printf("enter the data:\n");
    scanf("%d",&newnode->data);
    while(temp2->next!=head)
    {
        temp2=temp2->next;
        count++;
    }
    printf("the count :%d\n",count);
    if(pos==1)
    {
        insert_beg();
    }
    else if(pos==count+1)
    {
        insert_end();
    }
    else if(pos<1||pos>count+1)
    {
        printf("invalid position\n");
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            temp1=temp;
            temp=temp->next;
        }
        newnode->next=temp1->next;
        temp1->next=newnode;
        printf("newnode is successfully inserted at position\n");
    }
    return 0;
}
int delete_beg()
{
    struct node*temp,*temp1;
    temp=temp1=head;
    if(head==NULL)
    {
        printf("the list is empty\n");
    }
    else
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        head=head->next;
        temp->next=head;
        printf("the element deleted is %d\n",temp1->data);
        free(temp1);
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
        while(temp->next!=head)
        {
           temp1=temp;
           temp=temp->next;
        }
        temp1->next=temp->next;
        temp->next=NULL;
        printf("the node deleted is %d\n",temp->data);
        free(temp);
    }
    return 0;
}
int delete_pos()
{
    int pos,i,count=1;
    struct node*temp,*temp1,*temp2;
    temp2=temp1=temp=head;
    printf("enter position:\n");
    scanf("%d",&pos);
    while(temp2->next!=head)
    {
        temp2=temp2->next;
        count++;
    }
    if(head==NULL)
    {
        printf("the list is empty\n");
    }
    if(pos==1)
    {
        delete_beg();
    }
    else if(pos==count)
    {
        delete_end();
    }
    else if(pos>count||pos<count)
    {
        printf("invalid position\n");
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
        printf("the node deleted is %d\n",temp->data);
        free(temp);
    }
    return 0;
}
int display()
{
    struct node*temp;
    temp=head;
    if(head==NULL)
    {
        printf("the list is empty\n");
    }
    else
    {
        printf("the list elements are:\n");
        while(temp->next!=head)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
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

