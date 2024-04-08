#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n-1);
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<-1*sum<<endl;
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