// Let's rephrase the problem in the following form: let the elements of the array be points on a coordinate line. Then the absolute difference between two adjacent elements of the array can be represented as the distance between two points, and the contrast of the entire array is equal to the total distance to visit all points in the given order.

// In this interpretation, it becomes obvious that removing any set of points does not increase contrast. Since the resulting contrast should be equal to the original one, we can only remove elements from the array that do not decrease the contrast.

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    n=unique(a.begin(), a.end()) - a.begin();
    ll ans=n;
    // cout<<ans<<endl;
    for(int i=1;i<n-1;i++)
    {
        ans-=(a[i-1]<a[i] && a[i]<a[i+1]);
        ans-=(a[i-1]>a[i] && a[i]>a[i+1]);
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