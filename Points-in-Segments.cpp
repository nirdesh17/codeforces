#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    unordered_set<ll> a;
    for(ll i=0;i<n;i++)
    {
        ll b,c;
        cin>>b>>c;
        for(ll j=b;j<=c;j++)
        {
            a.insert(j);
        }
    }
    vector<ll> d{a.begin(),a.end()};
    vector<ll> e;
    bool yes=true;
    for(ll i=1;i<=m;i++)
    {
        for(ll j=0;j<d.size();j++)
        {
            if(i==d[j])
            {
                yes=false;
                break;
            }
        }
        if(yes)
        e.push_back(i);

        yes=true;
    }
    cout<<e.size()<<endl;
    for(ll i=0;i<e.size();i++)
    {
        cout<<e[i]<<" ";
    }
    cout<<endl;
    return 0;
}