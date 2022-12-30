#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<size;j++)
        {
           int con=0;
           for(int k=0;k<size;k++)
           {
               if(arr[j]==arr[k])
               {
                   con++;
               }
           }
           if(con==1)
           {
               cout<<j+1<<endl;
           }
        }
    }
    return 0;
}