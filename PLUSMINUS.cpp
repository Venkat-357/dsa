#include<iostream>
using namespace std;
class array
{
    private: int n,arr[100],i;
             float pv=0,nv=0,zero=0,p=0,q=0,r=0;
    public : int plusMinus(int arr[],int n)
             {
                 for(i=0;i<n;i++)
                 {
                    if(arr[i]>0)
                    {
                        p=p+1;
                    }
                    else if(arr[i]<0)
                    {
                        q=q+1;
                    }
                    else
                    {
                        r=r+1;
                    }
                 }
                 pv=p/n;
                 nv=q/n;
                 zero=r/n;
                 cout<<pv<<endl;
                 cout<<nv<<endl;
                 cout<<zero<<endl;
                 return 0;
             }
             int read()
             {
                 cin>>n;
                 for(i=0;i<n;i++)
                 {
                     cin>>arr[i];
                     if(arr[i]>100||arr[i]<-100)
                     {
                         exit(0);
                     }
                 }
                 plusMinus(arr,n);
                 return 0;
             }
             
};
int main()
{
    array obj;
    obj.read();
    return 0;
}
