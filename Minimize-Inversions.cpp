#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++) {
        cin>>b[i];
    }
    vector<vector<ll>> v;
    for(ll i=0;i<n;i++) {
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++) {
        cout<<v[i][0]<<" ";
    }
    cout<<endl;
    for(ll i=0;i<n;i++) {
        cout<<v[i][1]<<" ";
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