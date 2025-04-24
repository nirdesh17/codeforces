#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll zero=1,one=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) zero*=2;
        else if(a[i]==1) one++;
    }
    if(zero==0)
        zero=1;
    cout<<one*zero<<endl;
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