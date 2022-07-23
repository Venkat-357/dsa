#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],size,key,i;
    printf("enter the size of the array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    key=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<key)
        {
            key=a[i];
        }
    }
    printf("the smallest element in array is :%d",key);
    return 0;
}