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

vector<ll> v(10000001,0);

void solve() {
    ll n;
    cin>>n;
    

    ll cnt=0;
    for(int i=2;i<=n;i++)
    {
        if(v[i]!=-1)
        {
            cnt+=n/i;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    

    // seive of erastothenes
    for(int i=2;i*i<10000002;i++)
    {
        if(v[i]!=-1)
        {
            for(int j=i*i;j<10000002;j=j+i)
            {
                if(j%i==0)
                {
                    v[j]=-1;
                }
            }
        }
    }
    while (t--) {
        solve();
    }
    return 0;
}