#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) 
        cin>>a[i];

    vector<pair<ll,ll>> mp;
    for(int i=0;i<n;i++)
    {
        mp.push_back({a[i],i+1});
    }
    sort(mp.begin(),mp.end());
    vector<ll> ans(n+1);
    ans[0]=0;
    int j=1;
    for(int i=n-1;i>=0;i-=2)
    {
        ans[mp[i].second]=ans[0]+j;
        if(i-1>=0)
        {
            ans[mp[i-1].second]=ans[0]-j;
        }
        j++;
    }

    ll res=0;
    for(int i=1;i<=n;i++)
    {
        res+=(2*(abs(ans[0]-ans[i])*a[i-1]));
    }
    cout<<res<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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