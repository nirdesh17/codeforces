#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n,k;
    cin >> n >> k;
    int ans=INT_MAX;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x%2==0) cnt++;

        if(x%k==0) ans=0;
        ans=min(ans,k-(x%k));
    }
    if(k==4)
    {
        if(cnt>=2) ans=0;
        else if(cnt==1) ans=min(ans,1);
        else ans=min(ans,2);
    }
    cout<<ans<<endl;



    // same kind of logic but hard implementation
    // vector<ll> a(n);
    // ll pro = 1;
    // for (ll i = 0; i < n; i++) {
    //     cin >> a[i];
    //     pro *= a[i];
    // }
    // if(pro%k==0)
    // {
    //     cout<<0<<endl;
    // }
    // else
    // {
    //     vector<ll> b(n);
    //     for(int i=0;i<n;i++)
    //     {
    //         b[i]=k-(a[i]%k);
    //     }

    //     int ans=*min_element(b.begin(),b.end());
    //     if(k==4)
    //     {
    //         int cnt=count(b.begin(),b.end(),3);
    //         int A=cnt>=2?2:cnt;
    //         cout<<min(ans,A)<<endl;
    //         return;
    //     }
    //     cout<<ans<<endl;
    

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