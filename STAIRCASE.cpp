#include<iostream>
using namespace std;
class staircase
{
    private: int n,i,k;
    public : int read()
             {
                cout<<"enter the value of n:"<<endl;
                cin>>n;
                return 0;
             }
             int compute()
             {
                for(i=0;i<n;i++)
                {
                    k=n;
                    while(k--)
                    {
                        if(i<k)
                        {
                            cout<<" ";
                        }
                        else
                        {
                            cout<<"#";
                        }
                        if(k==0)
                        {
                            break;
                        }
                    }
                    cout<<endl;
                }
                return 0;
             }
};
int main()
{
    staircase obj;
    obj.read();
    obj.compute();
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 8052b58ed4a80c4811e1dfef7070601a8f90d03b
