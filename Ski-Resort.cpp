#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i=0,j=0;
    ll sum=0,cnt=0;
    while(j<n)
    {
        if(a[j]<=q)
        {
            cnt++;
            j++;
        }
        else
        {
            if(cnt>=k)
            {
                cnt=cnt-k+1;
                sum+=(cnt*(cnt+1))/2;
                cnt=0;
            }
            else
            {
                cnt=0;
            }
            j++;
            i=j;
        }
    }
    if(cnt>=k)
    {
        cnt=cnt-k+1;
        sum+=(cnt*(cnt+1))/2;
        cnt=0;
    }
    cout<<sum<<endl;
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