#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m;
    cin>>n>>m;
    if((4*n-2)<=m)
    {
        cout<<2*n<<endl;
        return;
    }
    ll a= m%2==0?m/2:(m+1)/2;
    cout<<a<<endl;
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