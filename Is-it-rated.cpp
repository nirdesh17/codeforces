#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int rated=0,unrated=0;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<2;j++)
       {
           cin>>a[i][j];
       }
    }
     for(int i=0;i<n;i++)
    {
      if(a[i][0]-a[i][1]!=0)
      {
          rated++;
      }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i][0]>=a[i+1][0])
        {
            unrated++;
        }
    }
    if(rated!=0)
    {
        cout<<"rated"<<endl;
    }
    else
    {
        if(unrated!=n-1)
        {
            cout<<"unrated"<<endl;
        }
        else
        {
            cout<<"maybe"<<endl;
        }
    }
    return 0;
}