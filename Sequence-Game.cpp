#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> ans;
    ans.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            ans.push_back(a[i]);
        }
        else
        {
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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