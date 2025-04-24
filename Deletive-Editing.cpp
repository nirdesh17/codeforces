#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s,t;
    cin>>s>>t;
    map<char,ll> mp;
    for(auto i:t) mp[i]++;

    string a="";
    for(int i=s.length()-1;i>=0;i--)
    {
        if(mp.find(s[i])!=mp.end() && mp[s[i]]>0)
        {
            a=s[i]+a;
            mp[s[i]]--;
        }
    }
    // cout<<a<<endl;
    if(a==t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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