#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll max(ll a,ll b)
{
    return a>b?a:b;
}

void solve() {
    ll n;
    cin>>n;
    vector<int> a(n);
    vector<int> b;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=i)
            b.push_back(a[i]&i);
    }
    ll cnt=b[0];
    for(int i=1;i<b.size();i++)
    {
        cnt=cnt&b[i];
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