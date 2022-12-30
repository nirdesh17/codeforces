#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    vector<ll> c;
    for(ll i=0;i<n-1;i++)
    {
        if(b[i]!=b[i+1])
        c.push_back(b[i]);
    }
    c.push_back(b[n-1]);
    ll d=c.size();
    ll e[n];
    ll f;
    for(ll i=0;i<d;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(c[i]==a[j])
            {
                f=j;
            }
        }
        e[f]=a[f];
    }
    for(ll i=0;i<n;i++)
    {
        if(e[i]!=a[i])
        e[i]=-1;
    }
    vector<ll> g;
    for(ll i=0;i<n;i++)
    {
        if(e[i]!=-1)
        g.push_back(e[i]);
    }
    cout<<g.size()<<endl;
    for(ll i=0;i<g.size();i++)
    {
        cout<<g[i]<<" ";
    }
    cout<<endl;
    return 0;
}