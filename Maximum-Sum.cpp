// this approch is good but fails for some edge cases when removing maximum is better in long term part

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n,m;
//     cin>>n>>m;
//     vector<ll> a(n);
//     for(int i=0;i<n;i++) cin>>a[i];

//     sort(a.begin(),a.end());
//     int i=0,j=1,k=n-1;
//     while(m>0 && j<k && k>0)
//     {
//         if((a[i]+a[j])<=a[k])
//         {
//             i+=2;
//             j+=2;
//         }
//         else
//         {
//             k--;
//         }
//         m--;
//     }
//     ll sum=0;
//     for(int b=i;b<=k;b++)
//     {
//         sum+=a[b];
//     }
//     cout<<sum<<endl;
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

// sliding window is more better
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),pre(n+1,0);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        pre[i+1]=pre[i]+a[i];
    }
    ll mx=0;
    // maximum we can eleminate 2k minimum element or k maximum element and rest middle will surely in there to count max sum
    // hence we can window and iterate it
    // 1 2 3 4 5 6 7 8 9 10 11 12    let k=2
    // - - - -              -- --    number withouy underline will surely stay now at make we can remove 1,2,3,4 or 11,12
    // 1 2 3 4 5 6 7 8 9 10 11 12
    //         - - - - - -- -- --   here we can window and check make sum to iterate we reduce by 1 at last and increase by 2 as first
    // 1 2 3 4 5 6 7 8 9 10 11 12
    //     - - - - - - - -- --       like this
        for(int i=0;i<=k;i++)
    {
        mx=max(mx,(pre[n-i]-pre[2*(k-i)]));
    }
    cout<<mx<<endl;
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