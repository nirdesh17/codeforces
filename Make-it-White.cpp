#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve() {
    ll n;
    cin>>n;
    string a;
    cin>>a; 
    int mi=INT_MAX,mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]=='B'){
            mi=min(mi,i);
            mx=max(mx,i);
        }
    }
    cout<<abs(mx-mi+1)<<endl;
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