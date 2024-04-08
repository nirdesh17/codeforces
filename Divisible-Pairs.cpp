#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // for this question we were given two condition 
    // ai+aj is divisible by x
    // ai−aj is divisible by y
    // so we can use maths and convert this equation in terms like:
    // from ai we can write aj%x=(x-ai%x)%x and aj%y=ai%y;

    map<pair<ll,ll>,ll> mp;
    ll ans=0;
    for(auto i:a)
    {
        ll ajModx=(x-(i%x))%x;
        ll ajMody=i%y;
        ans+=mp[{ajModx,ajMody}];
        mp[{i%x,i%y}]++;
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