#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[10],size,pos,i;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    printf("enter array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position :\n");
    scanf("%d",&pos);
    for(i=0;i<size;i++)
    {
        if(i==pos-1)
        {
            printf("the element deleted is%d\n",a[i]);
            break;
        }
    }
    for(i=pos-1;i<=size-1;i++)
    {
            a[i]=a[i+1];
    }
    printf("array after deletion:\n");
    for(i=0;i<size-1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
