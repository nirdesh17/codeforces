// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n;
//     cin >> n;
//     ll a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     ll Q;
//     cin >> Q;
//     vector<ll> ans;
//     for (int i = 0; i < Q; i++) {
//         ll l, k;
//         cin >> l >> k;
//         ll r = l;
//         ll sum = a[l - 1]; // Initialize sum with a[l - 1]
//         ll cnt = 0;
//         while (r <= n && (sum & a[r - 1]) >= k) { // Fix the condition and use a[r - 1]
//             r++;
//             cnt++;
//             if (r <= n)
//                 sum = sum & a[r - 1]; // Fix the order of operations and use a[r - 1]
//         }
//         if (cnt == 0) {
//             ans.push_back(-1); // No valid r found
//         } else {
//             ans.push_back(l + cnt - 1); // Store the result in the ans vector
//         }
//     }

//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
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
    vector<ll> a(n); // Use vector instead of array
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> rightmost(n, -1); // Initialize rightmost to -1
    stack<pair<ll, ll>> st; // Use a stack to store elements and their positions

    // Preprocessing: find the rightmost position for each element
    for (int i = 0; i < n; i++) {
        while (!st.empty() && (a[i] & st.top().first) >= a[i]) {
            st.pop();
        }
        if (!st.empty()) {
            rightmost[i] = st.top().second;
        }
        st.push({a[i], i});
    }

    ll Q;
    cin >> Q;
    vector<ll> ans;
    for (int i = 0; i < Q; i++) {
        ll l, k;
        cin >> l >> k;
        l--; // Convert to 0-based index
        if (a[l] < k) {
            ans.push_back(-1); // Handle the case where a[l] is less than k
        } else {
            ll r = l;
            if (rightmost[l] != -1) {
                r = max(r, rightmost[l]);
            }
            ans.push_back(r + 1); // Convert back to 1-based index
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
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
