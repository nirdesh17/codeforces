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
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    ll N=n*k;
    // vector<ll> b;
    // for(int i=0;i<k;i++)
    // {
    //     b.insert(b.end(), a.begin(), a.end());
    // }
    // vector<ll> pre(n);
    // pre[0]=b[0];
    // for(int i=1;i<n;i++)
    // {
    //     pre[i]=pre[i-1]+b[i];
    // }



    ll cnt=0;
    int i=0,j=0;

    // while(j<b.size())
    // {
    //     if(pre[j]<x)
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         cnt++;
    //         i++;
    //         break;
    //     }
    // }
    // if(j<i)
    //     j=i;
    // while(i<b.size() && j<b.size() && i<=j)
    // {
    //     if(pre[j]-pre[i-1]<x)
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         cnt++;
    //         i++;
    //     }
    // }

    ll sum=0;
    while(i<(2*n))
    {
        while(sum<x && j<(2*n))
        {
            sum+=a[j%n];
            j++;
        }
        if(sum>=x)
            cnt++;
        sum-=a[i%n];
        i++;
    }

    cout<<cnt*(k/2)<<endl;
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