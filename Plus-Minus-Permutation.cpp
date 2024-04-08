#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    ll least_common_multiple = lcm(x, y);
    ll count = n / least_common_multiple;

    ll mx = n / x;
    ll mi = n / y;
    mx -= count;
    mi -= count;

    ll a = n - mx;
    ll sum1 = (n * (n + 1)) / 2;
    ll sum2 = (a * (a + 1)) / 2;
    ll sum = sum1 - sum2;

    ll b = (mi * (mi + 1)) / 2;
    cout << sum - b << endl;
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
