#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    // sort(v.begin(),v.end());
    ll cnt=0,j=0;
    // for(int i=0;i<n;i++)
    // {
    //     if((i-j+1)*v[i]>k)
    //     {
    //         cnt++;
    //         j=i+1;
    //     }
    // }
    // cout<<cnt<<endl;
    sort(v.begin(),v.end(),greater<int>());
    int result = 0, r = n;
 
    for(int i = 0; i < n; i++) {
        int num = k / v[i] + 1;
 
        if(num > r) {
            break;
        }
 
        r -= num;
        result++;
    }
 
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}