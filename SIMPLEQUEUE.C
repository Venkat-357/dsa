#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int enqueue();
int dequeue();
int display();
int q[10],size,i,r=-1,f=0;
int main()
{
    int choice;
    printf("\nenter the size of the queue:\n");
    scanf("%d",&size);
    while(choice!=4)
    {
        printf("1.enqueue\n2.dequeue\n.3.display\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :enqueue();
            continue;
            case 2 :dequeue();
            continue;
            case 3 :display();
            continue;
            case 4 :exit(0);
            break;
            default:printf("\nenter the valid choice:\n");
            continue;
        }
    }
    return 0;
}
int enqueue()
{
    int x;
    if(r==size-1)
    {
        printf("\nqueue overflow\n");
    }
    else
    {
        printf("\nenter the element to be inserted:\n");
        scanf("%d",&x);
        q[++r]=x;
        printf("\nthe element is successfully inserted\n");
    }
    return 0;
}
int dequeue()
{
    if(f>r)
    {
        printf("\nthe quueue is empty\n");
    }
    else
    {
        printf("\nthe element deleted is %d\n",q[f]);
        f=f+1;
    }
    return 0;
}
int display()
{
    if(f>r)
    {
        printf("\nthe queue is empty\n");
    }
    else
    {
        printf("\nthe elements in queue are:\n");
        for(i=f;i<=r;i++)
        {
            printf("\n%d\n",q[i]);
        }
    }
    return 0;
}