#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long int

int solve(ll n, vector<int>& t, ll k, ll s) {
    sort(t.begin(), t.end()); 
    int mxT = 0;
    for (int i = 0; i < n; i += s) {
        int last = min(i + s - 1, n - 1);
        int dt = t[last];
        int wt = max(0, dt - t[i]);
        mxT = max(mxT, wt);
    }
    return mxT;
}

int main() {
    
    ll n, k, s;
    cin>>n>>k>>s;
    vector<int> t(n);
    for(int i = 0; i < n; i++)
    {
        cin>>t[i];
    }
    cout<<solve(n, t, k, s)<<endl;
    
    return 0;
}
