#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll b[q][2];
    for(ll i=0;i<q;i++)
    {
        cin>>b[i][0]>>b[i][1];
    }
    for(ll i=0;i<q;i++)
    {
        vector<ll> c;
        ll sum=0;
        for(ll j=0;j<b[i][0];j++)
        {
            c.push_back(a[j]);
        }
        sort(c.begin(), c.end());
        for(ll j=0;j<b[i][1];j++)
        {
            sum=sum+c[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}