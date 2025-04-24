#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> b(n);
    set<ll> a;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        a.insert(b[i]);
    }
    
    cout<<(a.size()==n?"NO":"YES")<<endl;
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