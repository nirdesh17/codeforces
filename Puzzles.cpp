#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int MIN=1000;
    for(int i=0;i<=m-n;i++)
    {
        int Min;
        Min=a[i+n-1]-a[i];
        
        if(MIN>Min)
        {
            MIN=Min;
        }
    }
    cout<<MIN<<endl;
    return 0;
}