#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    ll p;// direct cost;
    cin>>p;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    vector<ll> b(n);
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++) {
        cin>>b[i];
        v.push_back({min(b[i],p),a[i]});
    }
    sort(v.begin(),v.end());
    ll ans=p;
    ll cnt=n-1;//remaining people
    for(int i=0;i<n-1;i++)
    {
        ans+=min(v[i].second,cnt)*v[i].first;
        cnt-=min(v[i].second,cnt);
    }
    cout<<ans<<endl;
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


// my approch was to maximise the number of people but right approch is to minimise the cost of helmets
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n,m;
//     cin>>n>>m;;
//     vector<ll> a(n),b(n);
//     for(ll i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     for(ll i=0;i<n;i++) {
//         cin>>b[i];
//     }
//     if(n==1) {
//         cout<<m<<endl;
//         return;
//     }
//     ll ans = m;
//     vector<vector<ll>> v(n,vector<ll>(2,0));
//     for(ll i=0;i<n;i++) {
//         v[i][0] = b[i];
//         v[i][1] = a[i];
//     }
//     sort(v.begin(), v.end(), [](const vector<ll>& a, const vector<ll>& b) {
//         if (a[0] == b[0]) {
//             return a[1] > b[1];
//         }
//         return a[0] < b[0];
//     });
//     if(v[0][0]>=m) {
//         cout<<m*n<<endl;
//         return;
//     }
//     ll A=1;
//     // cout<<ans<<" ";
//     for(int i=0;i<n;i++)
//     {
//         int x=v[i][0];
//         int y=min(v[i][1],n-A);
//         ans+=(x*y);
//         A+=y;
//         // cout<<ans<<" ";
//         if(A>=n) break;       
//     }
//     // cout<<endl;
//     cout<<ans<<endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }