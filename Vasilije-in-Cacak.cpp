#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    ll sum=(k*(k+1))/2;
    ll sum1=((n-k)*(n-k+1))/2;
    ll tot=(n*(n+1))/2;
    if(x<sum || x>(tot-sum1))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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