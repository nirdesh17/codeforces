#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if((n & (n-1))==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
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