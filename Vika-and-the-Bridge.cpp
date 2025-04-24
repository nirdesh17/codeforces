#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll max(ll a,ll b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
ll min(ll a,ll b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    vector<vector<ll>> p(k+1);// creating array for all paint then for each paint store there occuring index of ach paint
    for(ll i=0;i<k+1;i++)
    {
        p[i].push_back(0);
    }
    for(ll i=0;i<n;i++){
        cin>>a[i];
        p[a[i]].push_back(i+1);
    }

    for(ll i=0;i<k+1;i++)
    {
        p[i].push_back(n+1);
    }

    ll ans=n+1;
    for(ll i=1;i<k+1;i++)
    {
        ll mx1=0,mx2=0;
        for(ll j=1;j<p[i].size();j++)
        {
            ll b=(p[i][j]-p[i][j-1]-1);
            if(b>=mx2 && b<=mx1)
            {
                mx2=b;
            }
            else if(b>=mx1)
            {
                mx2=mx1;
                mx1=b;
            }
        }
        ans=min(ans,max(mx2,mx1/2));
    }
    cout<<ans<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}