#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt = 0;
    for(int i=2;i<n-2;i++)
    {
        // string a=s[i-2]+s[i-1]+s[i]+s[i+1]+s[i+2]
        string a = string(1, s[i-2]) + s[i-1] + s[i] + s[i+1] + s[i+2];

        if(a=="mapie")
        {
            s[i]='0';
            cnt++;
        }
        // cout<<s<<endl;
    }
    for(int i=1;i<n-1;i++)
    {
        // string a=s[i-1]+s[i]+s[i+1]
        string a = string(1, s[i-1]) + s[i] + s[i+1];

        if(a=="map" || a=="pie")
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
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