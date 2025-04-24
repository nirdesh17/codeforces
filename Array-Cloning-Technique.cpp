#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<ll,ll> mp;
    for(ll i=0; i<n; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }

    ll cnt=0;
    ll mx=INT_MIN;
    for(auto i:mp)
    {
        mx=max(mx,i.second);
    }

    n=n-mx;
    while(n>0)
    {
        cnt+=(min(mx,n)+1);
        n=n-mx;
        mx=mx*2;
    }
    // cout<<"ans-"<<cnt<<endl;
    cout<<cnt<<endl;
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