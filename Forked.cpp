// #include <bits/stdc++.h>
// using namespace std;
// struct pair_hash {
//     template <class T1, class T2>
//     std::size_t operator () (const std::pair<T1, T2>& p) const {
//         auto h1 = std::hash<T1>{}(p.first);
//         auto h2 = std::hash<T2>{}(p.second);

//         // Simple hash combining technique
//         return h1 ^ h2;
//     }
// };
// void solve() {
//     long long a, b;
//     cin >> a >> b;
//     long long x1, y1, x2, y2;
//     cin >> x1 >> y1 >> x2 >> y2;

//     int r[4] = {-1, 1, -1, 1}, c[4] = {-1, -1, 1, 1};

//     unordered_map<pair<long long, long long>, int, pair_hash> mp;

//     for (int i = 0; i < 4; i++) {
//         mp[{x1 + r[i] * a, y1 + c[i] * b}]++;
//         mp[{x2 + r[i] * a, y2 + c[i] * b}]++;
//         mp[{x1 + r[i] * b, y1 + c[i] * a}]++;
//         mp[{x2 + r[i] * b, y2 + c[i] * a}]++;
//     }

//     int mx = 0;
//     for (auto i : mp) {
//         cout<<i.first.first<<" "<<i.second<<endl;
//         mx = max(mx, i.second);
//     }
//     cout << mx << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     long long t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

void solve() {
    int a, b; cin >> a >> b;
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        set<pair<int, int>> st1, st2;
        for(int j = 0; j < 4; j++){
            st1.insert({x1+dx[j]*a, y1+dy[j]*b});
            st2.insert({x2+dx[j]*a, y2+dy[j]*b});
            st1.insert({x1+dx[j]*b, y1+dy[j]*a});
            st2.insert({x2+dx[j]*b, y2+dy[j]*a});
        }
        int ans = 0;
        for(auto x : st1)
            if(st2.find(x) != st2.end())
                ans++;
        cout << ans << '\n';
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