#include<bits/stdc++.h>
using namespace std;
#define ll long long int


bool check(int i) {
    return i%2==0;
}
int Min(int a, int b) {
    return (a < b) ? a : b;
}

int Max(int a, int b) {
    return (a > b) ? a : b;
}
void solve() {
    ll n;
    cin>>n;
    int ans = 0;
    unordered_map<ll, ll> mp;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin>>a[i];
    mp[0]=1;
    ll res=0;
    ll Ans=0;
    for (int i=0;i<n;i++)
    {
        Ans=Min(ans,res);
        if(check(i))
            res+=a[i];
        else
            res-=a[i];
        
        if(mp[res])
            ans=1;
        else
            mp[res]++;
        Ans=Max(Ans,res);
    }
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
