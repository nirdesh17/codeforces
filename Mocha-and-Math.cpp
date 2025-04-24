#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll mx=INT_MIN;
    ll mn=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=a[0];
    for(int i=1;i<n;i++)
        ans=ans&a[i];
    
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