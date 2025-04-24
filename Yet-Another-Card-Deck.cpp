#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n,0);
    vector<ll> b(q,0);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    for(ll i=0;i<q;i++) {
        cin>>b[i];
    }
    unordered_map<ll,ll> mp;
    for(ll i=n-1;i>=0;i--)
    {
        mp[a[i]]=i;
    }
    for(int i=0;i<q;i++)
    {
        cout<<mp[b[i]]+1<<" ";
        int A=mp[b[i]];
        // mp[b[i]]=0;
        for(auto &x:mp)
        {
            if(x.second<A)
            {
                x.second++;
            }
        }
        mp[b[i]]=0;
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}