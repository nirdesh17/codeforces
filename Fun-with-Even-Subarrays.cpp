#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll sum=1;
    ll cnt=0;
    for(int i=n-2;i>=0;)
    {
        if(a[i]!=a[n-1])
        {
            i=i-sum;
            sum+=sum;
            cnt++;
        }
        else
        {
            i--;
            sum++;
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