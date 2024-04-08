#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum=sum/n;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=sum)
        {
            cnt+=(a[i]-sum);
        }
        else
        {
            if(cnt-(sum-a[i])>=0)
            {
                cnt-=(sum-a[i]);
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
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