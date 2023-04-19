#include<stdio.h>
#include<stdlib.h>
int quicksort(int a[],int l,int u);
int print_array(int a[], int n);
int partition(int a[],int l,int u);
int main()
{
    int a[10],n,i,l,u;
    printf("enter the number of elements in the array:\n");
    scanf("%d",&n);
    l=0;
    u=n-1;
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array before sorting:");
    print_array(a,n);
    quicksort(a,l,u);
    printf("the array after sorting:\n");
    print_array(a,n);
    return 0;
}
int quicksort(int a[],int l,int u)
{
   int loc;
   if(l<u)
   {
    loc=partition(a,l,u);
    quicksort(a,l,loc-1);
    quicksort(a,loc+1,u);
   }
}
int partition(int a[],int l, int u)
{
    int i,j,pivot,temp;
    i=l;
    j=u;
    pivot=a[l];
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i=i+1;
        }
        while(a[j]>pivot)
        {
            j=j-1;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    if(i>j)
    {
        temp=a[j];
        a[j]=pivot;
        pivot=temp;
    }
    return j;
}
int print_array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t\n",a[i]);
    }
}