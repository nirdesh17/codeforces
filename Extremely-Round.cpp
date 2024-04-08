#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> dp;
void cal()
{
    for(ll i=1;i<1000000;i=i*10)
    {
        for(ll j=1;j<=9;j++)
        {
            dp.push_back(i*j);
        }
    }
}
void solve() {
    ll n;
    cin>>n;
    ll ans=0;
    for(int i=0;i<dp.size();i++)
    {
        if(dp[i]<=n)
            ans++;
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cal();
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}