#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    // sort(a.begin(),a.end());
    map<ll,ll> mp; // we can also use priority queue
    // here we map out all element and try to find sequence based on previous number(i.e small number) how many sequence we could find (https://www.youtube.com/watch?v=VI1KirMy9oU)
    for(ll i=0;i<n;i++)
        mp[a[i]]++;
    ll last=0,cnt=0,ans=0;
    for(auto it:mp)
    {
        if(it.first==last+1)
        {
            if(cnt>=it.second)
            {
                cnt=it.second;
                last=it.first;
            }
            else
            {
                ans+=(it.second-cnt);
                cnt=it.second;
                last=it.first;
            }
        }
        else
        {
            ans+=it.second;
            last=it.first;
            cnt=it.second;
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