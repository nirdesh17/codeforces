#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
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
    vector<ll> d;
    for(ll i=0;i<c.size();i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(c[i]==a[j])
            {
                d.push_back(j);
                break;
            }
        }
    }
    sort(d.begin(),d.end());
    if(d.size()<m)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(ll i=0;i<m;i++)
        cout<<d[i]+1<<" ";

        cout<<endl;
    }
    
    return 0;
}