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
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    map<ll,ll> mp,mp1;
    for(auto i:a) mp[i]++;

    ll cnt=0;
    while(true)
    {
        if(mp[cnt]>0)
        {
            mp[cnt]--;
            ll f=mp[cnt];
            for(ll i=0;i<f;i++)
            {
                mp1[cnt%x]++;
            }
            cnt++;
        }
        else if(mp1[cnt%x]>0)
        {
            mp1[cnt%x]--;
            cnt++;
        }
        else
            break;
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




// brute force greedy
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// template<typename T>
// T max(T x,T y)
// {
//     return x>y?x:y;
// }

// template<typename T>
// T min(T x,T y)
// {
//     return x<y?x:y;
// }


// void solve() {
//     ll n,x;
//     cin>>n>>x;
//     vector<ll> a(n);
//     for(ll i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     map<ll,ll> mp;
//     for(ll i=0;i<n;i++)
//     {
//         mp[a[i]]++;
//     }
//     for(auto i:mp)
//     {
//         ll y=i.first;
//         ll z=i.second;
//         while(z>1)
//         {
//             y+=x;
//             if(mp.find(y)==mp.end())
//             {
//                 mp[y]++;
//                 z--;
//             }
//         }
//     }
//     ll i=0;
//     while(mp.find(i)!=mp.end())
//     {
//         i++;
//     }
//     cout<<i<<endl;
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