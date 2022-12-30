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
        ll n,m;
        cin>>n>>m;
        ll a[n],sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(m>sum)
        cout<<0<<endl;
        else
        cout<<sum-m<<endl;
        
    }
    return 0;
}