#include<stdio.h>
#include<stdlib.h>
int push();
int pop();
int peek();
int display();
int s[10],i,size,top=-1;
int main()
{
    int choice;
    printf("\nenter the size of the stack:\n");
    scanf("%d",&size);
    while(choice!=5)
    {
    printf("1.push\n2.pop\n3.peek\n4.display\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :push();
        continue;
        case 2 :pop();
        continue;
        case 3 :peek();
        continue;
        case 4 :display();
        continue;
        case 5 :exit(0);
        break;
        default :printf("enter the valid choice\n");
        continue;
    }
    return 0;
    }
}
int push()
{
    int x;
    if(top==size-1)
    {
        printf("\nstack overflow\n");
    }
    else
    {
        printf("\nenter the element to be inserted:\n");
        scanf("%d",&x);
        top=top+1;
        s[top]=x;
        printf("\nelement successfully inserted\n");
    }
    return 0;
}
int pop()
{
    if(top==-1)
    {
        printf("\nstack is empty\n");
    }
    else
    {
        printf("\nthe element deleted is %d\n",s[top]);
        top=top-1;
    }
    return 0;
}   
int peek()
{
    if(top==-1)
    {
        printf("\nstack is empty\n");
    }
    else
    {
        printf("\nthe topmost element in stack is %d:\n",s[top]);
    }
    return 0;
}
int display()
{
    if(top==-1)
    {
        printf("\nstack is empty\n");
    }
    else
    {
        printf("\nthe stack elements are:\n");
        for(i=0;i<size;i++)
        {
           printf("%d\n",s[i]);
        }
    }
    return 0;
}
