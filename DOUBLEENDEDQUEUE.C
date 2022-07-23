#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int insert_rear();
int delete_front();
int insert_front();
int delete_rear();
int display();
int q[10],size,i,r=-1,f=0;
int main()
{
    int choice;
    printf("\nenter the size of the queue:\n");
    scanf("%d",&size);
    while(choice!=6)
    {
        printf("1.insert at rear\n2.delete at front\n3.insert at front\n4.delete at rear\n5.display\n6.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :insert_rear();
            continue;
            case 2 :delete_front();
            continue;
            case 3 :insert_front();
            continue;
            case 4 :delete_rear();
            continue;
            case 5 :display();
            continue;
            case 6 :exit(0);
            break;
            default :printf("enter valid choice\n");
            continue;
        }
    }
    return 0;
}        
int insert_rear()
{
    int x;
    if(f==0&&r==size-1)
    {
        printf("queue overflow\n");
    }
    else
    {
        printf("enter the element to be inserted:\n");
        scanf("%d",&x);
        q[++r]=x;
        printf("the element is successfully inserted at rear\n");
    }
    return 0;
}
int delete_front()
{
    if(f>r)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("the element deleted is :%d\n",q[f]);
        f=f+1;
    }
    return 0;
}    
int insert_front()
{
    int x;
    if(f==0&&r==size-1)
    {
        printf("queue overflow\n");
    }
    else if(f==0&&r==-1)
    {
        printf("enter the element to be inserted:\n");
        scanf("%d",&x);
        r=r+1;
        q[f]=x;
        printf("the element is successfully inserted at front\n");
    }
    else
    {
        printf("enter the element to be inserted:\n");
        scanf("%d",&x);
        q[--f]=x;
        printf("the element is inserted at front\n");
    }
    return 0;
}
int delete_rear()
{
    if(f>r)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("the element deleted is %d\n",q[r]);
        r=r-1;
    }
    return 0;
}
int display()
{
    if(f>r)
    {
        printf("the queue is empty\n");
    }
    else
    {
        printf("the queue elements are:\n");
        for(i=f;i<=r;i++)
        {
            printf("%d\n",q[i]);
        }
    }
    return 0;
}

