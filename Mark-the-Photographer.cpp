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
        ll a[2*n];
        for(ll i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+2*n);
        bool yes=true;
        for(ll i=0;i<n;i++)
        {
            if(a[n+i]-a[i]<x)
            yes=false;
        }
        if(yes)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}