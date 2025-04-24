#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll a,b;
    cin>>a>>b;
    ll cnt;
    ll ans=LLONG_MAX;
    // try for all b and find min now where to syop b till square root of a why beacuse after that count will be more only becuase we add +1 and divide so count is incresing only 
    for(int i=0;i*i<=a;i++)
    {
        if(b==1 && i==0) continue;

        cnt=i;
        ll c=a;
        while(c)
        {
            c=c/(b+i);
            cnt++;
        }
        ans=min(ans,cnt);
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
