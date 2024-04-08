#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll power(ll x, ll y, ll p) {
    ll res = 1;
    x = x % p;
    while (y > 0) 
    {
        if (y & 1) 
        {
            res = (res * x) % p;
        }
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void solve() 
{
    ll x;
    cin >> x;
    const ll mod = 1000000007;
    ll Pow = power(10, x, mod);
    cout<<(Pow / 3) % mod<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}

