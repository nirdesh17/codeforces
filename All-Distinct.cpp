#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        vector<ll> b;
        for(ll j=0;j<n-1;j++)
        {
            if(a[j]!=a[j+1])
            {
                b.push_back(a[j]);
            }
        }
        b.push_back(a[n-1]);
        ll d=b.size();
        if(n%2==0)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<d-1<<endl;
        }
    }
    return 0;
}