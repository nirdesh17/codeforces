#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n*k);
    for(ll i=0;i<n*k;i++) {
        cin>>a[i];
    }
    ll sum=0;
    ll i=(n*k);
    ll j=ceil((double)n/(double)2);
    ll b=(n-j+1);
    i=i-b;
    while(k--)
    {
        sum+=a[i];
        // cout<<a[i]<<" -";
        i=i-b;    
    }
    cout<<sum<<endl;
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