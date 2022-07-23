#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[10],n,i,sum=0,sum1=0,m;
    printf("enter the value of n\n");
    scanf("%d\n",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("the actual sum is %d\n",sum);
    sum1=(n*(n+1))/2;
    printf("the expected sum is %d\n",sum1);
    if(sum1==sum)
    {
        printf("there is  no missing number\n");
    }
    else
    {
        m=sum1-sum;
        printf("the missing number is %d\n",m);
    }
    return 0;
}