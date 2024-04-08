#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s;
    cin >> s;
    ll a = 0, b = 0;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            a++;
        } else {
            b++;
        }
    }
    if(a>=b)
        cout<<"A"<<endl;
    else
        cout<<"B"<<endl;
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