#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s;
    cin>>s;
    if(s[0]==s[s.size()-1])
    {
        cout<<s<<endl;
    }
    else
    {
        s[s.size()-1]=s[0];
        cout<<s<<endl;
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