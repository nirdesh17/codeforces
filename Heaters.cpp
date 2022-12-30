#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,r,counter=0,sum=0;;
    cin>>n>>r;
    ll a[n];
    vector<ll> b;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        b.push_back(i);

        sum=sum+i;
    }
    unordered_set<ll> c;
    for(ll i=0;i<b.size();i++)
    {
        for(ll j=i-r+1;i<=i+r-1;j++)
        {
            c.insert(j);
        }
        vector<ll> d{c.begin(),c.end()};
        ll Sum=0;
        for(ll j=0;j<d.size();j++)
        {
            Sum=Sum+d[j];
        }
        counter++;
        if(Sum==sum)
        {
            break;
        }
    }
    cout<<counter<<endl;
    return 0;
}