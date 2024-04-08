#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++) cin >> b[i];
    ll sum=0;ll mx=0;ll ans=0;
   
   for(int i=0;i<min(n,k);i++)
   {
        sum+=a[i];
        mx=max(mx,b[i]);
        ans=max(ans,sum+mx*(k-i-1));
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