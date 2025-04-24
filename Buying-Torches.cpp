#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll x,y,k;
    cin>>x>>y>>k;
    ll a=(y*k)+k-1;
    ll trade=(a/(x-1));
    if(a%(x-1)!=0) trade++;
    // ll n=a-trade;
    // n++;
    // while(a>n)
    // {
    //     trade++;
    //     n+=(x-1);
    // }
    cout<<trade+k<<endl;
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