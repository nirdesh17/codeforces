#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m;
    cin>>n>>m;
    ll s=0;
    for(int i=0;i<3;i++)
    {
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++)
        {
            if((a[i]|m)!=m) break;

            s|=a[i];
        }
    }   

    if(s==m)
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