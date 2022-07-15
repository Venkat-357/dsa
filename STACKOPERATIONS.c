#include<stdio.h>
void push();
void pop();
void peek();
void display();
int top=-1,s[10],size,i;
int main()
{
    int choice;
    printf("enter the size of the stack\n");
    scanf("%d",&size);
    printf("1.push()\n 2.pop()\n 3.peek()\n 4.display()\n");
    printf("enter the choice:");
    scanf("%d",&choice);
    while(1)
    {
        switch(choice)
        {
            case 1 :push();
                    break;
            case 2 :pop();
                    break;
            case 3 :peek();
                    break;
            case 4 :display();
                    break;
            case 5 :exit(0);
                    break;
            default:printf("wrong choice\n");
                    break;        }
    }

}
void push()
{
  int n;
  if(top==(size-1))
  {
      printf("stack overflow\n");
  }
  else
  {
  printf("enter the elements to be inserted\n");
  for(i=0;i<size;i++)
  {
  scanf("%d",&n);
  top++;
  s[top]=n;
  }
  printf("elements are successfully entered\n");
  }
}
void pop()
{
  if(top==-1)
  {
      printf("stack underflow\n");
  }
  else
  {
  printf("the element popped is %d",s[top]);
  top--;
  }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is underflow\n");
    }
    else
    {
        printf("%d",s[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        for(i=top;i>0;i--)
        {
            printf("%d\n",s[i]);
        }
    }
}
