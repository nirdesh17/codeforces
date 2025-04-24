#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a;
    vector<ll> b;
    for(int i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        vector<ll> A(k);
        for(int j=0;j<k;j++)
        {
            cin>>A[j];
        }
        sort(A.begin(),A.end());
        a.push_back(A[0]);
        b.push_back(A[1]);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=a[0];
    for(int i=1;i<b.size();i++)
    {
        ans+=b[i];
    }
    // cout<<"ans-"<<ans<<endl;
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