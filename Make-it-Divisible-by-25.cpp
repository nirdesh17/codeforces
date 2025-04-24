#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll num=(s[i]-'0')*10+s[j]-'0';
            if(num%25==0)
            {
                ans=min(ans,n-i-2);
            }
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