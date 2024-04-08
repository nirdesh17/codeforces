// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n;
//     cin>>n;
//     vector<ll> a(n);
//     for(ll i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     sort(a.begin(),a.end());
//     ll ans=0;
//     ll mx=0;
//     for(ll i=1;i<n;i++)
//     {
//         if(a[i]==a[i-1]+1)
//         {
//             ans++;
//         }
//         else
//         {
//             mx=max(mx,ans);
//             ans=0;
//         }
//     }
//     mx=max(mx,ans);
//     mx++;
//     // cout<<mx<<endl;
//     set<ll> s;
//     for(ll i=0;i<n;i++)
//     {
//         if(a[i]<=n)
//             s.insert(a[i]);
//     }
//     ll m=s.size();
//     cout<<max(mx,m)<<endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.resize(unique(a.begin(), a.end()) - a.begin());

    ll pnt = 0, ans = 0;
    for (ll i = 0; i < a.size(); i++) {
        while (a[i] - a[pnt] >= n) {
            pnt++;
        }
        ans = max(ans, i - pnt + 1);
    }
    cout << ans << endl;
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
