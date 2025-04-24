#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    ll m=n*(n-1)/2;
    vector<ll> a(m);
    for (ll i=0; i<m; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0;i<m;i+=--n)
    {
        cout<<a[i]<<" ";
    }
    cout<<1000000000;
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