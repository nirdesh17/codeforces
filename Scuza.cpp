// TLE

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n,q;
//     cin>>n>>q;
//     vector<ll> a(n);
//     vector<ll> b(q);
//     for(ll i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     for(ll i=0;i<q;i++) {
//         cin>>b[i];
//     }

//     vector<ll> ans(q,0);
//     vector<ll> pre(n,0);
//     pre[0]=a[0];
//     for(int i=1;i<n;i++)
//     {
//         pre[i]=a[i]+pre[i-1];
//     }
//     for(int i=0;i<q;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(a[j]<=b[i])
//             {
//                 ans[i]=pre[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<q;i++)
//     {
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
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


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> b(q);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < q; i++) {
        cin >> b[i];
    }

    // Initialize prefix sum vector with 0 at the beginning
    vector<ll> pre;
    pre.push_back(0); // Starting from 0
    for (int i = 0; i < n; i++) {
        pre.push_back(a[i] + pre.back()); // Cumulative sum
    }

    // Initialize prefix max vector
    vector<ll> pre_max;
    pre_max.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        pre_max.push_back(max(pre_max.back(), a[i])); // Cumulative max
    }

    for (ll i = 0; i < q; i++) {
        int ind = upper_bound(pre_max.begin(), pre_max.end(), b[i]) - pre_max.begin();
        cout << pre[ind] << " ";  // Access the corresponding prefix sum
    }
    cout << endl;
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
