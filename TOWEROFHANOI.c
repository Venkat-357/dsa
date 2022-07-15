#include<stdio.h>
void tower(int ,char ,char , char );
int n;
int main()
{
    printf("enter the number of disks\n");
    scanf("%d",&n);
    printf("the operations involved in tower of hanoi are:");
    tower(n,'a','b','c');
    return 0;
}
tower(int n ,char s,char aux,char d)
{
    if(n==1)
    {
        printf("move disk %d from peg %c to peg %c\n",n,s,d);
        return;
    }
    tower(n-1,s,d,aux);
    {
        printf("move disk %d from peg %c to peg %c\n",n,s,d);
    }
    tower(n-1,aux,s,d);
}
