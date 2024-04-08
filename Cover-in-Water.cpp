#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll mx=0;
    ll i=0,j=0;
    while(i<n && j<n)
    {
        if(s[j]=='.')
        {
            j++;
        }
        else
        {
            mx=max(mx,j-i);
            i=j+1;
            j=j+1;
        }
    }
    mx=max(mx,j-i);;
    if(mx>=3)
        cout<<2<<endl;
    else
    {
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='.')
                cnt++;
        }
        cout<<cnt<<endl;
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