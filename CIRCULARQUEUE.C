#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int enqueue();
int dequeue();
int display();
int q[10],size,i,f=-1,r=-1;
int main()
{
    int choice;
    printf("enter the size of the queue:\n");
    scanf("%d",&size);
    while(choice!=4)
    {
        printf("1.enqueue\n2.dequeue\n3.display\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : enqueue();
            continue;
            case 2 : dequeue();
            continue;
            case 3 : display();
            continue;
            case 4 :exit(0);
            break;
            default:printf("enter the valid choice\n");
            continue;
        }
    }
    return 0;
}
int enqueue()
{
    int x;
    if(f==-1&&r==-1)
    {
        printf("enter the element to be inserted:\n");
        scanf("%d",&x);
        f=r=0;
        q[r]=x;
        printf("the element is successfully inserted \n");
    }
    else if((r+1)%size==f)
    {
        printf("queue overflow\n");
    }    
    else
    {
        printf("enter the element to be inserted :\n");
        scanf("%d",&x);
        r=(r+1)%size;
        q[r]=x;
        printf("the element is successfully inserted\n");
    }
    return 0;
}
int dequeue()
{
    if(f==-1&&r==-1)
    {
        printf("the queue is empty\n");
    }
    else if(f==r)
    {
        printf("the element deleted is %d\n",q[f]);
        f=-1;
        r=-1;
    }
    else
    {
        printf("the element deleted is %d\n",q[f]);
        f=(f+1)%size;
    }
    return 0;
}
int display()
{
    if(f==-1&&r==-1)
    {
        printf("the queue is empty\n");
    }
    else
    {
        i=f;
        printf("the queue elements are:\n");
        while(i!=r)
        {
            printf("%d\n",q[i]);
            i=(i+1)%size;
        }
        printf("%d\n",q[r]);
    }
    return 0;
}    

