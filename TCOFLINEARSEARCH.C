#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    clock_t t;
    int size,keynum,i,found=0;
    printf("enter the size of the array:\n");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        a[i]=rand()%100;
    }
    printf("the array elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("element number %d:%d\n",i+1,a[i]);
    }
    printf("enter the element to be searched:\n");
    scanf("%d",&keynum);
    t=clock();
    for(i=0;i<size;i++)
    {
        if(a[i]==keynum)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("elment found at position %d\n",i+1);
    }
    else
    {
        printf("element not found");
    }
    t=clock()-t;
    double time_taken=(double (t))/CLOCKS_PER_SEC;
    printf("the time complexity is %lf\n",time_taken);
    return 0;
}   
