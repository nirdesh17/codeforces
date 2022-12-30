#include<bits/stdc++.h>
using namespace std;
  

  int maximum(int a[],int n)
  {
      int max=a[0];
      for(int i=0;i<n;i++)
      {
          if(a[i]>max)
          {
              max=a[i];
          }
          
      }
      return max;
  }

int main()
{
    int test, task,time;
    cin>>test>>task>>time;
    int arr[test];
    for(int i=0;i<test;i++)
    {
        cin>>arr[i];
    }
  
  for(int i=0;i<task;i++)
  {
   int max_i= maximum(arr,test);
   for(int i=0;i<test;i++)
   {
       if(arr[i]==max_i)
       {
           arr[i]=0;
           break;
       }
   }
  }
  int Sum=0;
  for(int i=0;i<test;i++)
  {
      Sum=Sum+arr[i];
  }
   Sum=Sum+(task*time);
  cout<<Sum;



    return 0;
}