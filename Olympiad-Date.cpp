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
    ll n;
    cin>>n;

    vector<ll> bag(n);
    for(ll i=0;i<n;i++)
    {
        cin>>bag[i];
    }

    ll zero=0,one=0,two=0,three=0,five=0;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(zero>=3 && one>=1 && two>=2 && three>=1 && five>=1)
        {
            cout<<cnt<<endl;
            return;
        }

        if(bag[i]==0)
        {
            zero++;
        }
        else if(bag[i]==1)
        {
            one++;
        }
        else if(bag[i]==2)
        {
            two++;
        }
        else if(bag[i]==3)
        {
            three++;
        }
        else if(bag[i]==5)
        {
            five++;
        }

        cnt++;
    }

    if(zero>=3 && one>=1 && two>=2 && three>=1 && five>=1)
    {
        cout<<cnt<<endl;
        return;
    }
    cout<<0<<endl;


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