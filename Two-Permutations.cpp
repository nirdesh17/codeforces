#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,a,b;
    cin>>n>>a>>b;
    if(n==a && n==b) 
        cout<<"YES\n";
    else if((a+b)<=n-2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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