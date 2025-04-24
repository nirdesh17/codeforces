#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a,b,n;
    cin >> a >> b >> n;
    vector<ll> time(n);
    ll ans=0;
    for(int i=0;i<n;i++) {
        cin >> time[i];
        ans+=min(time[i],a-1);
    }
    cout<<ans+b<<endl;
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