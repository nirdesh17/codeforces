#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a, b;
    cin >> a >> b;

    ll m = max(a, b);
    ll n = min(a, b);
    ll g = __gcd(a, b);
    ll num1 = m / g;
    ll num2 = n / g;

    num1 = num1 == 1 ? INT_MAX : num1;
    num2 = num2 == 1 ? INT_MAX : num2;

    // cout << n << " " << m << " " << g << " ";

    if(g == 1) {
        if(n == 1) {
            cout << m * m << endl;
        }
        else {
            cout << a * b << endl;
        }
    }
    else {
        cout << min(num1, num2) * m << endl;
    }

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