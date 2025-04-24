#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    sum=ceil((double)sum/(double)x);
    ll SUM=0;
    for(ll i=0;i<n;i++) {
        SUM+=ceil((double)a[i]/(double)x);
    }
    cout<<sum<<" "<<SUM<<endl;
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