#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
            ll l=1,r=x-l;
            for(ll j=l-1;j<r-1;j++)
            {
                a[j]=a[j]+1;
            }
            for(ll j=0;j<n-1;j++)
            {
                if(a[j+1]>a[j]+a[j+2])
                {
                    sum++;
                }
            }
         cout<<sum<<endl;
    }
    return 0;
}