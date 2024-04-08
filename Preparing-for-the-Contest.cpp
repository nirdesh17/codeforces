#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    int a=n-k;
    for(int i=a;i>0;i--)
    {
        cout<<i<<" ";
    }
    for(int i=a+1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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