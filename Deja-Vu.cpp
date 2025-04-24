#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), b(q);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < q; i++)
        cin >> b[i];

    // Sort the queries in ascending order to process the smallest powers first
    // sort(b.begin(), b.end());

    // Initialize min_processed to a large value
    int min_processed = 31; // Since xi can be at most 30

    for (int j = 0; j < q; j++) {
        if (b[j] < min_processed) {
            ll power_of_two = 1LL << b[j];
            ll increment = power_of_two >> 1;

            for (int i = 0; i < n; i++) {
                if (a[i] % power_of_two == 0) {
                    a[i] += increment;
                }
            }

            // Update min_processed to the current xi
            min_processed = b[j];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
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
