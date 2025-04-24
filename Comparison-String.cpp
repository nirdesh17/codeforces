#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin >> s;
    ll mx=0;
    ll cnt=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else
        {
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    mx=max(mx,cnt);
    cout<<mx+1<<endl;
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