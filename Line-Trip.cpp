#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    ll mx=a[0]-0;
    for(ll i=1;i<n;i++) 
    {
        mx=max(mx,a[i]-a[i-1]);
    }
    mx=max(mx,2*(x-a[n-1]));
    cout<<mx<<endl;
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