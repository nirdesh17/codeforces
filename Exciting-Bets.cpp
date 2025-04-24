#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m;
    cin>>n>>m;
    if(m>n) swap(n,m);
    ll ans=n-m;
    if(ans==0) cout<<0<<" "<<0<<endl;
    else cout<<ans<<" "<<min(m%ans,ans-m%ans)<<endl;
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