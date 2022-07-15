#include<stdio.h>
void enque();
void deque();
void display();
int q[10],size,r=-1,f=0,i;
int main()
{
    int choice;
    printf("enter the size of the queue\n");
    scanf("%d",&size);
    while(1)
    {

     printf("1.enque\n 2.deque\n 3.display\n");
     printf("enter the choice:\n");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1 :enque();
                  break;
         case 2 :deque();
                  break;
         case 3 :display();
                  break;
         case 4 :exit(0);
                  break;
         default:printf("wrong choice\n");
                  break;
     }
    }
    return 0;

}
void enque()
{
    int x ,r=-1,f=0;
    if(r==size-1)
    {
        printf("queue overflow");
    }
    else
    {
     printf("enter the elements to be inserted\n");
     for(i=0;i<size;i++)
     {
      scanf("%d",&x);
      q[++r]=x;
     }
     printf("elements inserted successfully\n");
    }

}
void deque()
{
 if(f>r)
 {
     printf("queue underflow\n");
 }
 else
 {
     printf("the element deleted is %d",q[f++]);
 }
}
void display()
{
    if(f>r)
    {
        printf("queue underflow\n");
    }
    else
    {
        for(i=f;i<r;i++)
        {
            printf("%d\n",&q[i]);
        }
    }
}
