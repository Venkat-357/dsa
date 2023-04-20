#include<iostream>
using namespace std;
class grading
{
    private: int n,grades[100],i,result[100],marks[100];
    public : int read()
            {
                cin>>n;
                for(i=0;i<n;i++)
                {
                    cin>>grades[i];
                }
                return 0;
            }
            int gradingStudents(int grades[],int n)
            {
                
               for(i=0;i<n;i++)
               {
                if(grades[i]<46&&grades[i]>39)
                {
                    if(45-grades[i]<3)
                    {
                        result[i]=45;
                    }
                    else 
                    {
                        result[i]=grades[i];
                    }
                }
                else if(grades[i]<51&&grades[i]>45)
                {
                    if(50-grades[i]<3)
                    {
                        result[i]=50;
                    }
                    else 
                    {
                        result[i]=grades[i];
                    }
                }
                else if(grades[i]<56&&grades[i]>50)
                {
                    if(55-grades[i]<3)
                    {
                        result[i]=55;
                    }
                    else
                    {
                        result[i]=grades[i];
                    }
                }
                else if(grades[i]<=60&&grades[i]>=56)
                {
                    if(60-grades[i]<3)
                    {
                        result[i]=60;
                    }
                    else
                    {
                        result[i]=grades[i];
                    }
                }
                else if(grades[i]<=65&&grades[i]>=61)
                {
                    if(65-grades[i]<3)
                    {
                        result[i]=65;
                    }
                    else 
                    {
                        result[i]=grades[i];
                    }
                }
                else if(grades[i]<=70&&grades[i]>=66)
                {
                    if(70-grades[i]<3)
                    {
                        result[i]=70;
                    }
                    else 
                    {
                        result[i]=grades[i];
                    }
                }
                else if(grades[i]<=75&&grades[i]>=71)
                {
                    if(75-grades[i]<3)
                    {
                        result[i]=75;
                    }
                    else
                    {
                        result[i]=grades[i];
                    }
                }
                else if(grades[i]<=80&&grades[i]>=76)
                {
                    if(80-grades[i]<3)
                    {
                        result[i]=80;
                    }
                    else
                    {
                        result[i]=grades[i];
                    }
                }
               else if(grades[i]<=85&&grades[i]>=81)
               {
                   if(85-grades[i]<3)
                   {
                       result[i]=85;
                   }
                   else
                   {
                       result[i]=grades[i];
                   }
               }
               else if(grades[i]<=90&&grades[i]>=86)
               {
                   if(90-grades[i]<3)
                   {
                       result[i]=90;
                   }
                   else
                   {
                       result[i]=grades[i];
                   }
               }
               else if(grades[i]<=95&&grades[i]>=91)
               {
                   if(95-grades[i]<3)
                   {
                       result[i]=95;
                   }
                   else
                   {
                       result[i]=grades[i];
                   }
               }
               else if(grades[i]<=100&&grades[i]>=96)
               {
                   if(100-grades[i]<3)
                   {
                       result[i]=100;
                   }
                   else
                   {
                       result[i]=grades[i];
                   }
               }
               else if(grades[i]>=38&&grades[i]<=40)
               {
                   result[i]=40;
               }
               else
               {
                  result[i]=grades[i];
               }
               }
            return result[0];  
            } 
            int compute()
            {
                marks[0]=gradingStudents(grades,n);
                for(i=0;i<n;i++)
                {
                    marks[i]=result[i];
                }
                for(i=0;i<n;i++)
                {
                    cout<<marks[i]<<endl;
                }
                return 0;
            }
};
int main()
{
    grading obj;
    obj.read();
    obj.compute();
    return 0;
}