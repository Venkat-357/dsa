#include<stdio.h>
void enqueue();
void dequeue();
void display();
int size=5,q[10],r=-1,f=-1;
int main()
{
    int choice;
    printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
    printf("enter the choice:\n");
    scanf("%d",&choice);
    while(1)
    {
        switch(choice)
        {
            case 1:
                   enqueue();
                   break;
            case 2:dequeue();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
            case 5:printf("wrong choice\n");
                   break;
        }
    }
return 0;
}
void enqueue()
{
    int x;
    printf("enter the element to be inserted:\n");
    scanf("%d",&x);
    if(r==-1&&f==-1)
    {
        r=0,f=0;
        q[r]=x;
    }
    else if(((r+1)%size)==f)
    {
        printf("queue overflow\n");

    }
    else
    {
        r=(r+1)%size;
        q[r]=x;
    }
}
void dequeue()
{
    if(f==-1&&r==-1)
    {
        printf("queue is empty\n");

    }
    else if(r==f)
    {
        printf("the element deleted is %d",q[f]);
        r=-1,f=-1;
    }
    else
    {
        printf("the element deleted is %d",q[f]);
        f=(f+1)%size;
    }
}
void display()
{
    if(f==-1&&r==-1)
    {
        printf("queue is empty\n");

    }
    else
    {
        int i=f;
        while(i!=r)
        {
            printf("%d",q[i]);
            i=(i+1)%size;
        }
        printf("%d",q[r]);
    }
}


