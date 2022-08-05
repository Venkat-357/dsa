#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,m;
    n=7;
    m=7;
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==0||j==0||i==6||j==6)
            {
                printf("1\t");
            }
            else if(i==1||j==1||i==5|j==5)
            {
                printf("2\t");
            }
            else if(i==2||j==2||i==4||j==4)
            {
                printf("3\t");
            }
            else if(i==3||j==3)
            {
                printf("4\t");
            }
            else
            {
                printf("%d\t",j+1);
            }
        }
        printf("\n"); 
    }
    return 0;
}   