#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    unordered_map<char,int> mp;
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    ll odd=0;
    for(auto i:mp)
    {
        if(i.second%2!=0)
            odd++;
    }

    if(odd-1>k|| k>n)
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