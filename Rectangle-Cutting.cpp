#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a,b;
    cin>>a>>b;
    if(a%2==0 && b%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if(a%2!=0 && b%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll mi=min(a,b);
        ll mx=max(a,b);
        if(mi*2==mx)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
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