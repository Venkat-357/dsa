#include<iostream>
using namespace std;
class page
{
    private: long int n,p,num,result,mid,temp=0;
    public : int read()
             {
                 cin>>n>>p;
                 return 0;
             }
             int pageCount(long int n,long int p)
             {
                 mid=n/2;
                 if(p<mid)
                 {
                     num=p/2;
                     
                 }
                 else
                 {
                     temp=n-p;
                     num=temp/2;
                 }
                 return num;
             }
             int compute()
             {
                 result=pageCount(n,p);
                 cout<<result;
                 return 0;
             }
};
int main()
{
    page obj;
    obj.read();
    obj.compute();
    return 0;
}