#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n;
    cin>>n;
    ll a=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=n/i;// we are doing this becuase number have two divisor like 12 have two division 2 and 6 so we are taking 6 as a for minimum lcm
            break;
        }
    }
    cout<<a<<" "<<n-a<<endl;
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

// tle
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n;
//     cin>>n;
//     pair<ll,ll> p=make_pair<ll,ll>(-1,-1);
//     ll sum=INT_MAX;
//     ll a=-1,b=-1;
//     for(int i=1;i<=n/2;i++)
//     {
//         a=i,b=n-i;
//         if(b%a==0)
//         {
//             ll ans=b;
//             if(ans<sum)
//             {
//                 sum=ans;
//                 p={a,b};
//             }
//         }
//     }
//     cout<<p.first<<" "<<p.second<<endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }