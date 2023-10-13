#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// void check(int a, unordered_map<int, int> &mp) {
//     int i = 2;  // Start from 2, since we already handled 1.
//     while (a > 1) {
//         if (a % i == 0) {
//             mp[i]++;
//             a /= i;
//         } else {
//             i++;
//         }
//     }
// }

void check(int a, unordered_map<int, int> &mp) {
    while (a % 2 == 0) {
        mp[2]++;
        a /= 2;
    }
    
    for (int i = 3; i * i <= a; i += 2) {
        while (a % i == 0) {
            mp[i]++;
            a /= i;
        }
    }

    if (a > 1) {
        mp[a]++;
    }
}


void solve() {
    ll n;
    cin >> n;
    if (n == 0) {
        cout << "NO" << endl; // Handle n = 0 case
        return;
    }

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        check(arr[i], mp);
    }

    for (auto i : mp) {
        if (i.second % n != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
