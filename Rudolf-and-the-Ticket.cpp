#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a(n),b(m);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]+b[j]<=k)
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