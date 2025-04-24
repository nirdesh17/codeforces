#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<vector<ll>> cities(n,vector<ll>(2));
    for(int i=0;i<n;i++)
    {
        cin>>cities[i][0]>>cities[i][1];    
    }

    // case 1: if both a and b are part of major cities
    if(a<=k && b<=k)
    {
        cout<<0<<endl;
        return;
    }

    // case 2: if any one is belong to major cities
    if(a<=k || b<=k)
    {
        if(b<a) swap(a,b);// assume that one city is a
        // vector<ll> end={cities[b-1][0],cities[b-1][1]};
        ll dist=LLONG_MAX;
        for(int i=0;i<k;i++)
        {
            ll x=abs(cities[b-1][0]-cities[i][0]);
            ll y=abs(cities[b-1][1]-cities[i][1]);
            dist=min(dist,x+y);
        }
        cout<<dist<<endl;
        return;
    }

    // case 3: when both are non major cities
    // dist of a to any mojor city and dist of b to any city 
    ll distA=LLONG_MAX;
    ll distB=LLONG_MAX;
    for(int i=0;i<k;i++)
    {
        ll x=abs(cities[b-1][0]-cities[i][0]);
        ll y=abs(cities[b-1][1]-cities[i][1]);
        distB=min(distB,x+y);
    }
    for(int i=0;i<k;i++)
    {
        ll x=abs(cities[a-1][0]-cities[i][0]);
        ll y=abs(cities[a-1][1]-cities[i][1]);
        distA=min(distA,x+y);
    }
    // direct distance btw 2 cities
    ll dist_direct=LLONG_MAX;
    dist_direct=abs(cities[a-1][0]-cities[b-1][0])+abs(cities[a-1][1]-cities[b-1][1]);
    if(k<=0)
    {
        cout<<dist_direct<<endl;
        return;
    }
    ll ans=min(dist_direct,(distA+distB));
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