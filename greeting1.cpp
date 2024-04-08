#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v;
        pbds s;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            ll y;
            cin >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ll get=s.order_of_key(v[i].second);
            ans=ans+s.size()-get;
            s.insert(v[i].second);
        }
        cout<<ans<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    
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