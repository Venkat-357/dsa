#include<iostream>
using namespace std;
class jump
{
    private: int x1,v1,x2,v2,sum1=0,sum2=0;
             char result1={'y'},result2={'n'},RESULT;
    public : int read()
             {
                 cin>>x1>>v1>>x2>>v2;
                 return 0;
             }
             int kangaroo(int x1,int v1,int x2,int v2)
             {
                 sum1=x1+v1;
                 sum2=x2+v2;
                 if(sum1==sum2)
                 {
                     return result1;
                 }
                 else
                 {
                     return result2;
                 }
             }
             int compute()
             {
                 RESULT=kangaroo(x1,v1,x2,v2);
                 if(RESULT==result1)
                 {
                     cout<<"YES"<<endl;
                 }
                 else
                 {
                     cout<<"NO"<<endl;
                 }
                 return 0;
             }
};
int main()
{
    jump obj;
    obj.read();
    obj.compute();
    return 0;
}
