#include<iostream>
#include<iomanip>
using namespace std;
void fishweights(int n,int arr[])
{
    int i,min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<endl<<"the weight of bowl :"<<min<<endl;
    int weights[n-1];
    for(i=0;i<n;i++)
    {
        if(arr[i]==min)
        {
            weights[i]=0;
        }
        else
        {
            weights[i]=arr[i]-min;
        }
    }
    cout<<endl<<"the weights of fishes :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<weights[i]<<setw(4);
    }
}
int main()
{
    int n;
    cout<<"enter the number of inputs"<<endl;
    cin>>n;
    int arr[n],i;
    cout<<"enter the weights :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    fishweights(n,arr);
    return 0;
}