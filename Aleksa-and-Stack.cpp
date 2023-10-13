#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    int a=6;
    for(int i=0;i<n;i++)
    {
        cout<<a++<<" ";
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