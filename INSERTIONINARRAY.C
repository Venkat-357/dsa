#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,n,pos,key;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be inserted:");
    scanf("%d",&key);
    printf("enter the position :");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
            a[i+1]=a[i];
    }
    a[pos-1]=key;
    printf("the final array is :\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}  

