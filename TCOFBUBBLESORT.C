#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    clock_t t;
    int size,i,j,temp;
    printf("\nenter the size of the array:\n");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        a[i]=rand()%100;
    }
    printf("\nthe array elements before sorting are:\n");
    for(i=0;i<size;i++)
    {
        printf("\nthe element number %d:%d\n",i+1,a[i]);
    }
    t=clock();
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    printf("\nthe array elements after sorting are:\n");
    for(i=0;i<size;i++)
    {
        printf("\nthe element number %d:%d\n",i+1,a[i]);
    }
    t=clock()-t;
    double time_taken=(double(t))/CLOCKS_PER_SEC;
    printf("the time complexity is %lf",time_taken);
    return 0;
} 


    

