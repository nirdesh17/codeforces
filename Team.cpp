#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n;
     cin>>n;
    int a[n],b[n],c[n],d=0;
   
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1 && b[i]==1 || b[i]==1 && c[i]==1 || a[i]==1 && c[i]==1 || a[i]==1 && b[i]==1 && c[i]==1 )
        {
            d=d+1;
        }
    }
    cout<<d;
    return 0;
}