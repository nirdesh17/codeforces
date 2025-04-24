#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<char> s1;
    set<char> s2;
    vector<ll> pre(s.length());
    vector<ll> suff(s.length());
    for(int i=0;i<s.length();i++)
    {
        s1.insert(s[i]);
        pre[i]=s1.size();
    }

    for(int i=s.length()-1;i>=0;i--)
    {
        s2.insert(s[i]);
        suff[i]=s2.size();
    }
    
    ll sum=0;
    for(int i=0;i<s.length()-1;i++)
    {
        sum=max(sum,pre[i]+suff[i+1]);
    }
    cout<<sum<<endl;
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