// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// template<typename T>
// T Mmax(T x,T y)
// {
//     return x>y?x:y;
// }

// template<typename T>
// T Mmin(T x,T y)
// {
//     return x<y?x:y;
// }


// void solve() {
//     ll n,k;
//     cin>>n>>k;
//     vector<ll> a(n),b(n);
//     for(ll i=0;i<n;i++)
//         cin>>a[i];
    
//     for(ll i=0;i<n;i++)
//         cin>>b[i];

//     ll mx=INT_MIN;
//     ll mn=INT_MAX;
//     ll cnt=0;
//     ll A=0;
//     for(ll i=0;i<n;i++)
//     {
//         if(b[i]==-1)
//         {
//             mx=Mmax(mx,a[i]);
//             mn=Mmin(mn,a[i]);
//             cnt++;
//         }
//     }
//     if(cnt==n)
//     {
//         ll ans=0;
//         for(ll i=0;i<=k;i++)
//         {
//             ll c=mx+i;
//             ll d=abs(c-mn);
//             if(d>k)
//             {
//                 break;
//             }
//             ans++;
//         }
//         cout<<ans<<endl;
//         return;
//     }

//     unordered_map<ll,ll> mp;
//     for(int i=0;i<n;i++)
//     {
//         if(b[i]!=-1)
//         {
//             mp[a[i]+b[i]]++;
//         }
//     }
//     if(mp.size()==1 && cnt>0)
//     {
//         ll D=-1;
//         for(auto i:mp)
//         {
//             D=i.first;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(b[i]==-1 && a[i]>D)
//             {
//                 cout<<0<<endl;
//                 return;
//             }
//             else if(b[i]==-1 && abs(D-a[i])>k)
//             {
//                 cout<<0<<endl;
//                 return;
//             }
//         }
//         cout<<1<<endl;
//         return ;
//     }

//     cout<<0<<endl;

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


// my above thinking was right but some implementation problem because i thought in very messy way
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<typename T>
T mx(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T mn(T x,T y)
{
    return x<y?x:y;
}


void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    ll mx_a=INT_MIN,mn_a=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mx_a=mx(a[i],mx_a);
        mn_a=mn(a[i],mn_a);
    }
    ll cnt=0;//count -1;
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]==-1)
            cnt++;
    }


    if(cnt==n)
    {
        // at leat max of b in mx_a-mn_a;
        ll mn_b=mx_a-mn_a;
        cout<<k-mn_b+1<<endl;// mn_b,mn_b+1,mn_b+2...,k
    }
    else
    {
        ll s=-1;
        for(ll i=0;i<n;i++)
        {
            if(b[i]!=-1)
            {
                if(s==-1)
                    s=a[i]+b[i];
                else if(s!=a[i]+b[i])
                {
                    cout<<0<<endl;
                    return;
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]>s || s-a[i]>k)
            {
                cout<<0<<endl;
                return;
            }
        }
        cout<<1<<endl;
    }

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