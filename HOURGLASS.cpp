#include<iostream>
using namespace std;
class hourglass
{
    private: int a[6][6],i,k,j,sum[16],temp;
    public: int read();
            int compute();
};
int hourglass:: read()
{
    cout<<"enter the array elements:"<<endl;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    return 0;
}
int hourglass:: compute()
{
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
                  sum[0]=a[0][0]+a[0][1]+a[0][2]+a[1][1]+a[2][0]+a[2][1]+a[2][2];
                  sum[1]=a[0][1]+a[0][2]+a[0][3]+a[1][2]+a[2][1]+a[2][2]+a[2][3];
                  sum[2]=a[0][2]+a[0][3]+a[0][4]+a[1][3]+a[2][2]+a[2][3]+a[2][4];
                  sum[3]=a[0][3]+a[0][4]+a[0][5]+a[1][4]+a[2][3]+a[2][4]+a[2][5];
                  sum[4]=a[1][0]+a[1][1]+a[1][2]+a[2][1]+a[3][0]+a[3][1]+a[3][2];
                  sum[5]=a[1][1]+a[1][2]+a[1][3]+a[2][2]+a[3][1]+a[3][2]+a[3][3];
                  sum[6]=a[1][2]+a[1][3]+a[1][4]+a[2][3]+a[3][2]+a[3][3]+a[3][4];
                  sum[7]=a[1][3]+a[1][4]+a[1][5]+a[2][4]+a[3][3]+a[3][4]+a[3][5];
                  sum[8]=a[2][0]+a[2][1]+a[2][2]+a[3][1]+a[4][0]+a[4][1]+a[4][2];
                  sum[9]=a[2][1]+a[2][2]+a[2][3]+a[3][2]+a[4][1]+a[4][2]+a[4][3];
                  sum[10]=a[2][2]+a[2][3]+a[2][4]+a[3][3]+a[4][2]+a[4][3]+a[4][4];
                  sum[11]=a[2][3]+a[2][4]+a[2][5]+a[3][4]+a[4][3]+a[4][4]+a[4][5];
                  sum[12]=a[3][0]+a[3][1]+a[3][2]+a[4][1]+a[5][0]+a[5][1]+a[5][2];
                  sum[13]=a[3][1]+a[3][2]+a[3][3]+a[4][2]+a[5][1]+a[5][2]+a[5][3];
                  sum[14]=a[3][2]+a[3][3]+a[3][4]+a[4][3]+a[5][2]+a[5][3]+a[5][4];
                  sum[15]=a[3][3]+a[3][4]+a[3][5]+a[4][4]+a[5][3]+a[5][4]+a[5][5];
        }
    }
    cout<<"the list of sum:"<<endl;
    for(i=0;i<16;i++)
    {
        cout<<sum[i]<<" ";
    }
    for(i=0;i<16;i++)
    {
        for(j=0;j<16-1-i;j++)
        {
            if(sum[j]>sum[j+1])
            {
                temp=sum[j];
                sum[j]=sum[j+1];
                sum[j+1]=temp;
            }
        }
    }
    cout<<endl<<sum[15];
    return 0;
}
int main()
{
    hourglass obj;
    obj.read();
    obj.compute();
    return 0;
}
