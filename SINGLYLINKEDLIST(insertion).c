#include<stdio.h>
#include<stdlib.h>
void insert_begin();
void insert_end();
void insert_pos();
void display();
struct node
{
    int data;
    struct node*next;
};
struct node*head,*temp,*newnode;
void insert_begin()
{
    temp=head=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        printf("\nfirst element entered successfully\n");
    }
    else
    {
        newnode->next=head;
        head=newnode;
        printf("\nelement inserted at begining successfully\n");
    }
    return 0;
}
void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    temp=head;
    if(head==0)
    {
        head=newnode;
        newnode->next=0;
        printf("\nfirst element entered successfully\n");
    }
    else
    {
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        printf("\nelement inserted at end successfully\n");
    }
    return 0;
}
void insert_pos()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    int pos,i;
    printf("enter data:");
    scanf("%d",&newnode->data);
    printf("enter position:");
    scanf("%d",&pos);
    temp=head;
    if(pos>temp)
    {
        printf("enter valid position");
        temp=head;

    }
    else if(head==0)
    {
        head=newnode;
        newnode->next=NULL;

        printf("\nfirst element entered successfully\n");
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("\nelement inserted at position successfully\n");
    }
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int choice;
    while(choice!=5)
    {
    printf("1.insert at begining\n2.insert at end\n3.insert at position\n4.display\n5.exit\n");
    printf("\n enter your choice:\n");
    scanf("\n%d",&choice);
    switch(choice)
    {
        case 1 :insert_begin();
        break;
        case 2 :insert_end();
        break;
        case 3 :insert_pos();
        break;
        case 4 :display();
        break;
        case 5 :exit(0);
        break;
        default:printf("enter valid choice:");
        continue;
    }
    }
    return 0;
}




