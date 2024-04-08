#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a^b^c)<<endl;
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