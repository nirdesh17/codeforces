#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct ComparePairs {
    bool operator()(const pair<ll, ll>& a, const pair<ll, ll>& b) const {
        if (a.first == b.first) {
            return a.second < b.second; // If first values are equal, compare based on second value
        }
        return a.first > b.first; // Compare based on first value
    }
};
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    vector<pair<ll, ll>> v;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i]%k;
        if(a[i]==0) a[i]=k;
        v.push_back({a[i],i+1});
    }

    sort(begin(v),end(v),ComparePairs());;

    for(int i=0;i<n;i++)
    {
        cout<<v[i].second<<" ";
    }
    cout<<endl;
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



// gives tle on test 6
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// struct ComparePairs {
//     bool operator()(const pair<ll, ll>& a, const pair<ll, ll>& b) const {
//         if (a.first == b.first) {
//             return a.second > b.second; // If first values are equal, compare based on second value
//         }
//         return a.first < b.first; // Compare based on first value
//     }
// };

// void solve() {
//     ll n,k;
//     cin>>n>>k;
//     vector<ll> a(n);
//     priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, ComparePairs> pq;
//     for(ll i=0;i<n;i++)
//     {
//         cin>>a[i];
//         pq.push({a[i],i+1});
//     }

//     vector<ll> ans;
//     while(!pq.empty())
//     {
//         auto a=pq.top();
//         pq.pop();
//         a.first=a.first-k;
//         if(a.first<=0)
//         {
//             ans.push_back(a.second);
//         }
//         else
//         {
//             pq.push(a);
//         }
//     }
//     // cout<<ans.size()<<endl;
//     for(ll i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
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