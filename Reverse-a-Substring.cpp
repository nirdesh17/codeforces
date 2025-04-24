#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            swap(s[i],s[i+1]);
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}