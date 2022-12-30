#include<bits/stdc++.h>
using namespace std;
using ll=unsigned  long  long;

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        ll n,m,x;        
        cin>>n>>m>>x;
        ll a[n][m];
        ll p=1;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                a[j][k]=p;
                p++;
            }
        }
        ll q=0;
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
               q++;
               if(q==x)
               {
                 cout<<a[k][j]<<endl;
                 break;
               }
            }
        }
    }
    return 0;
}