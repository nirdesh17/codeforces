#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for(int i=1;i<n;i++)
    {
        ans+=(a[i]-a[i-1]);
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