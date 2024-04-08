#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    map<ll,ll> mp;
    for(auto i:a)
        mp[i]++;

    if(mp.begin()->second==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    vector<ll> b;
    for(auto i:mp)
    {
        b.push_back(i.first);
    }
    
    if(b.size()==1)
    {
        cout<<"NO"<<endl;
        return;
    }

    for(int i=1;i<b.size();i++)
    {
        if(b[i]%b[0]!=0)
        {
            cout<<"YES"<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;
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