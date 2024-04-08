#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    ll mn = INT_MAX, mx = INT_MIN;

    for(int i=0;i<n;i++) {
        ll cnt=0;
        for(int j=0;j<n;j++)
        {
            char c;
            cin>>c;
            if(c=='1') 
            {
                cnt++;
            }
        }
        if(cnt != 0) {
            mx = max(mx, cnt);
            mn = min(mn, cnt);
        }
    }

    if(mn==mx)
        cout<<"SQUARE"<<endl;
    else
        cout<<"TRIANGLE"<<endl;
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