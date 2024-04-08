#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;

    ll a[n], b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) 
    {
        v[i] = {a[i] + b[i], i};
    }
    sort(v.begin(),v.end());
    
    ll res=0,cnt=0;
    for(int i = n - 1; i >= 0; i--)
    {
        if (cnt % 2 == 0) 
        {
            res+=a[v[i].second]-1;
        }
        else 
        {
            res-=b[v[i].second]-1;
        }
        cnt++;
    }
    cout<<res<<endl;
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