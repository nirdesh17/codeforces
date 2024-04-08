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
    ll ai=a[0],aj=a[n-1],ak=a[1],al=a[n-2];
    cout<<abs(ai-aj)+abs(aj-ak)+abs(ak-al)+abs(al-ai)<<endl;
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