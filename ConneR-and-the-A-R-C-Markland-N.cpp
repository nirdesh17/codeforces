#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL)
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,s,k;
        cin>>n>>s>>k;
        ll a[k];
        for(ll i=0;i<k;i++)
        cin>>a[i];
        ll b[n];
        for(ll i=0;i<n;i++)
        b[i]=i+1;

        vector<ll> c;
        for(ll i=0;i<n;i++)
        {
            // bool exists = ;
            if(find(a, a + k, b[i]) == a + k)
            c.push_back(b[i]);
        }
        // cout<<c.size()<<endl;
        // for(ll i=0;i<c.size();i++)
        // cout<<c[i]<<" ";
        ll min=10000;
        for(ll i=0;i<c.size();i++)
        {
            if(min>abs(c[i]-s))
            min=abs(c[i]-s);
        }
        cout<<min<<endl;
    }
    
    return 0;
}