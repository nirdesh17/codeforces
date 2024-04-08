#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin >> n>>k;
    if(n%k!=0)
    {
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<n-1<<" "<<1<<endl;
    }
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