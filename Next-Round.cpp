#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n,c,d=0;  /// n=
     cin>>n>>c;
    int a[n];
   
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[c-1] && a[i]>0)
        {
            d=d+1;
        }
        else
        {
            d=d+0;
        }
    }
    cout<<d;
    return 0;
}