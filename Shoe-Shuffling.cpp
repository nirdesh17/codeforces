#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<ll,pair<ll,ll>> mp;
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        if(mp.find(a[i])==mp.end()) mp[a[i]]={i+1,i+1};
        mp[a[i]].first=min(mp[a[i]].first,i+1);
        mp[a[i]].second=max(mp[a[i]].second,i+1);
    }

    for(auto i:mp) {
        if(i.second.first==i.second.second) {
            cout<<-1<<endl;
            return;
        }
    }
    for(auto i:mp) {
        int r=i.second.second;
        int l=i.second.first;
        cout<<r<<" ";
        while(l<r)
        {
            cout<<l++<<" ";
        }
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