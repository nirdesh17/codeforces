#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T max(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T min(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> a(m);
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    priority_queue<ll> pq;
    for(int i=1;i<m;i++)
    {
        pq.push(a[i]-a[i-1]-1);
    }
    pq.push((a[0]-1)+(n-a[m-1]));
    ll ans=0;
    ll b=0;
    while(!pq.empty())
    {
        if((pq.top()-b)>1)
        {
            ans+=pq.top()-1-b;
            b+=4;
            pq.pop();
            // cout<<"ans "<<ans<<endl;
        }
        else if((pq.top()-b)==1)
        {
            ans+=pq.top()-b;
            b+=4;
            pq.pop();
        }
        else
        {
            break;
        }
    }

    cout<<n-ans<<endl;

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