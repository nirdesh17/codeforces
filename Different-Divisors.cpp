#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll> v;
ll n=1000000;

void prime()
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p])
        {
            for(int i=p*p;i<=n;i+=p)
            {
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            v.push_back(i);
        }
    }
}

void solve() {
    ll d;
    cin>>d;
    ll ans=1;
    if(v.empty()) {
        prime(); // Generate primes only if the vector is empty
    }
    ll j=-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-1>=d)
        {
            j=v[i];
            ans*=j;
            break;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-j>=d)
        {
            ans*=v[i];
            break;
        }
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
