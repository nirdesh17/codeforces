#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s;
    cin>>s;
    ll n=s.length();
    ll zero=0,one=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    ll mn=min(zero,one);
    if(mn%2==0)
    {
        cout<<"NET"<<endl;
    }
    else
    {
        cout<<"DA"<<endl;
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