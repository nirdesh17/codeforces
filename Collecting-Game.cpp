#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> b=a;
    sort(b.begin(),b.end());
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++) {
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++) {
        v[i].first += v[i-1].first;
    }
    vector<ll> dp(n);
    dp[n-1]=n-1;
    for(int i=n-2;i>=0;i--) {
        if(v[i].first>=b[i+1]) {
            dp[i]=dp[i+1];
        }
        else {
            dp[i]=i;
        }
    }
    vector<ll> ans(n);
    for(int i=0;i<n;i++) {
        ans[v[i].second] = dp[i];
    }
    for(int i=0;i<n;i++) {
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
