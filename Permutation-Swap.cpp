#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll res=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        res=__gcd(res,abs(a[i]-i-1));
    }
    cout<<res<<endl;Odd Queries   
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