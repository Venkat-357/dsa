#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    clock_t t;
    int size,high,low,i,mid,keynum,found=0;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        a[i]=rand()%100;
    }
    printf("\nthe array elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("\nthe element number %d:%d\n",i+1,a[i]);
    }
    high=size-1;
    low=0;
    printf("\nenter the search element :\n");
    scanf("%d",&keynum);
    t=clock();
    while(low<=high)
    {
        mid=(high+low)/2;
        if(keynum==a[mid])
        {
            printf("the element found at%d\n",mid+1);
            found=1;
            break;
        }
        else if(keynum>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(found==1)
    {
      printf("the element found\n");
    }
    else
    {
      printf("element not found\n");
    } 
    t=clock()-t;
    double time_taken=(double(t))/CLOCKS_PER_SEC;
    printf("the time complexity is:%lf\n",time_taken);
    return 0;
}    


