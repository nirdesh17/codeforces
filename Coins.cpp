#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin >> n>>k;
    if(n%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(k%2!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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