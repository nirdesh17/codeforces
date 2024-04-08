#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve1()
{
    int x, n; 
    cin >> x >> n; 
    int ans = (x / n) - (x % n); 
    cout << (ans == 0 ? (x / n) : (x % n)) << endl; 
}
void solve() {
    int x, n;
    cin >> x >> n;
    int q = x / n;
    set<int> st;
    ll Q=0;
    for(int i=1;i<=n;i++)
    {
        Q+=q;
    }
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0) {
            st.insert(i);
            st.insert(x / i);
        }
    }
    // Q=min(Q,q);
    auto i = st.lower_bound(Q);
    auto it = st.lower_bound(q);
    if (*it > q && it != st.begin()) 
    {
        it--;
    }
    cout << *it << endl;
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

