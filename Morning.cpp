#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s;
    cin >> s;

    int ans = 4;
    int cur = 1;

    for(int i = 0; i < 4; i++) 
    {
        int c = s[i] - '0';

        if(c == 0) 
        {
            ans += abs(10 - cur); 
            cur = 10;
        }
        else 
        {
            ans += abs(c - cur);
            cur = c;
        }
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