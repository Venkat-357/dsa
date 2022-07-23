#include<stdio.h>
int tower(int,char,char,char);
int n;
int main()
{
    printf("\nenter the number of disks\n");
    scanf("%d",&n);
    printf("\nthe steps involved in tower of hanoi are:\n");
    tower(n,'a','b','c');
    return 0;
}
int tower(int n,char s,char aux,char d)
{
    if(n==1)
    {
        printf("\nmove peg %d from %c to %c\n",n,s,d);
        return;
    }
    tower(n-1,s,d,aux);
    printf("\nmove peg %d from %c to %c\n",n,s,d);
    tower(n-1,aux,s,d);
}