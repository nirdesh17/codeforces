// use maths to solve
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),zeros;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(auto i:a)
    {
        int cnt0=0,dig=0;
        while(i%10==0) cnt0++,i/=10;
        while(i>0) dig++,i/=10;

        zeros.push_back(cnt0);
        m-=dig;
    }
    sort(zeros.begin(),zeros.end(),greater<ll>());

    for(int i=1;i<zeros.size();i+=2)
    {
        m-=zeros[i];
    }

    cout<<(m<0?"Sasha":"Anna")<<endl;
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


// brute force fails for some cases
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n,m;
//     cin>>n>>m;
//     vector<ll> a;
//     vector<ll> b;
//     for(ll i=0;i<n;i++)
//     {
//         ll x;
//         cin>>x;
//         if(x%10==0)
//         {
//             b.push_back(x);
//         }
//         else
//             a.push_back(x);
//     }
//     int N=b.size()%2==0?b.size()/2:b.size()/2+1;
//     for(ll i=0;i<N;i++)
//     {
//         while(b[i]%10==0 && b[i]>0)
//         {
//             b[i]=b[i]/10;
//         }
//     }
//     for(int i=0;i<b.size();i++)
//     {
//         a.push_back(b[i]);
//     }
//     string s;
//     for(int i=0;i<a.size();i++)
//     {
//         s+=to_string(a[i]);
//     }
//     // ll ans=stoi(s);
//     // ll MOD=pow(10,m);
//     // if(ans>MOD) cout<<"Sasha"<<endl;
//     // else cout<<"Anna"<<endl;
//     ll ans=s.length();
//     if(s.length()>=m+1)
//     {
//         cout<<"Sasha"<<endl;
//     }
//     else
//     {
//         cout<<"Anna"<<endl;
//     }
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