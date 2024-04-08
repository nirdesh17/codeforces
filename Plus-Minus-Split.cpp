#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll plus=0,minus=0;
    for(auto i:s)
    {
        if(i=='+')
            plus++;
        else
            minus++;
    }
    cout<<abs(plus-minus)<<endl;
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