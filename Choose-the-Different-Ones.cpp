#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    set<ll> s1,s2;
    for(int i=0;i<n;i++){
        if(a[i]<=k)
            s1.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        if(b[i]<=k)
            s2.insert(b[i]);
    }
    set<ll> s;
    // for(auto i:s1) cout<<i<<" ";
    // for(auto i:s2) cout<<i<<" ";
    if(s1.size()<k/2 || s2.size()<k/2)
    {
        cout<<"NO"<<endl;
        return;
    }
    // cout<<"---"<<endl;
    for(auto i:s1)
    {
        s.insert(i);
    }
    for(auto i:s2)
    {
        s.insert(i);
    }
    for(int i=1;i<=k;i++)
    {
        if(s.find(i)==s.end())
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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





























































// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n,m,k;
//     cin>>n>>m>>k;
//     vector<ll> a(n),b(m);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>b[i];
//     }
//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());
//     int i=0,j=0;
//     set<ll> s;
//     k=k/2;
//     ll K=k;
//     while(i<n && j<m && k>0 && K>0)
//     {
//         if(a[i]<b[j])
//         {
//             if(s.find(a[i])==s.end())
//             {
//                 s.insert(a[i]);
//                 k--;
//                 continue;
//             }
//             i++;
//         }
//         else
//         {
//             if(s.find(b[j])==s.end())
//             {
//                 s.insert(b[j]);
//                 K--;
//                 continue;
//             }
//             j++;
//         }
//     }
//     for(auto i:s)
//     {
//         cout<<i<<" ";
//     }
//     if(s.size()==(k*2))
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
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