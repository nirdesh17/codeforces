#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a,b;
    cin>>a>>b;
    if((a+b)%2==0)
        cout<<"Bob"<<endl;
    else
        cout<<"Alice"<<endl;
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