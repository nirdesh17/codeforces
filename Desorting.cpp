#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mn=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<=a[i])
        {
            mn=min(mn,a[i]-a[i-1]);
        }
        else
        {
            cout<<0<<endl;
            return;
        }
    }
    cout<<mn/2+1<<endl;
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