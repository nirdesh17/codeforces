#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,c;
    cin>>n>>c;
    vector<ll> arr(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin>>arr[i];
    }
    vector<int> mp;
    for(int i=1;i<n+1;i++)
    {
        mp.push_back(arr[i]+i);
    }
    sort(mp.begin(),mp.end());
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(mp[i]<=c)
        {
            ans++;
            c-=(mp[i]);
        }
    }
    cout<<ans<<endl;
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