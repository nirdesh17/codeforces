#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            b[j]=a[j];
        }
        sort(b,b+n);
        int MIN=b[0];
        int MAX=b[n-1];
        int c,d;
        for(int j=0;j<n;j++)
        {
            if(a[j]==MIN)
            {
                c=j+1;
            }
            if(a[j]==MAX)
            {
                d=j+1;
            }
        }
        int e,f;
        if(c<=n/2)
        {
            e=c-0;
        }
        else
        {
            e=n-c;
        }
        if(f<=n/2)
        {
            f=d-0;
        }
        else
        {
            f=n-d;
        }
        cout<<e+f<<endl;
    }
    return 0;
}