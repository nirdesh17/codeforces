// here we were given |v-a_i|<=x means we can say a_i-x<=v<=a_i+x
// so we can say that v is in the range of a_i-x to a_i+x
// mean we calculate the range of v for each i and then take the intersection of all the ranges
// mean most common range of v for all the i will be the answer
// if at some point not common part means we have to change v  hence cnt++;

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        v[i].first=a[i]-x;
        v[i].second=a[i]+x;// here we are calculating the range of v for each i
        if(v[i].first<0) v[i].first=0; 
    }

    ll cnt=0,l=v[0].first,r=v[0].second;// here we are taking the first range as common range
    for(int i=1;i<n;i++)
    {
        if(v[i].first>r || v[i].second<l)
        {
            cnt++;
            l=v[i].first;
            r=v[i].second;
            // we we increment cnt as no common range was found so we have to change v 
        }

        l=max(l,v[i].first);
        r=min(r,v[i].second);// adjusting the common range for v
    }
    cout<<cnt<<endl;
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